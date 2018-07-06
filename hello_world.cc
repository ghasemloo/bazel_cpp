#include <string>

#include "hello_world.h"

#include "v.h"

namespace {
const char* message = "Hello World!";
}

namespace hello_world {

HelloWorld::HelloWorld() {}

std::string HelloWorld::Message() {
  return message;
}

int V() {
  return v;
}

}  // namespace hello_world
