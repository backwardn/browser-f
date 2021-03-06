/* Any copyright is dedicated to the Public Domain.
   http://creativecommons.org/publicdomain/zero/1.0/ */

"use strict";

var gDebuggee;
var gThreadFront;

add_task(
  threadFrontTest(
    async ({ threadFront, debuggee }) => {
      gThreadFront = threadFront;
      gDebuggee = debuggee;
      test_banana_environment();
    },
    { waitForFinish: true }
  )
);

function test_banana_environment() {
  gThreadFront.once("paused", async function(packet) {
    const env = await packet.frame.getEnvironment();
    equal(env.type, "function");
    equal(env.function.name, "banana3");
    let parent = env.parent;
    equal(parent.type, "block");
    ok("banana3" in parent.bindings.variables);
    parent = parent.parent;
    equal(parent.type, "function");
    equal(parent.function.name, "banana2");
    parent = parent.parent;
    equal(parent.type, "block");
    ok("banana2" in parent.bindings.variables);
    parent = parent.parent;
    equal(parent.type, "function");
    equal(parent.function.name, "banana");

    await gThreadFront.resume();
    threadFrontTestFinished();
  });

  gDebuggee.eval(
    "function banana(x) {\n" +
      "  return function banana2(y) {\n" +
      "    return function banana3(z) {\n" +
      '      eval("");\n' +
      "      debugger;\n" +
      "    };\n" +
      "  };\n" +
      "}\n" +
      "banana('x')('y')('z');\n"
  );
}
