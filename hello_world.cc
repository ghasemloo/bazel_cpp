#include <string>

#include "hello_world.h"

namespace {
const char* message = "Hello World!";
}

namespace hello_world {

HelloWorld::HelloWorld() {}

std::string HelloWorld::Message() {
  return message;
}

}  // namespace hello_world
