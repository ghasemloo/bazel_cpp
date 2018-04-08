#ifndef HELLO_WORLD_H_
#define HELLO_WORLD_H_

#include <string>

namespace hello_world {

// HelloWorld is a simple class.
class HelloWorld {
 public:
  // HelloWorld constructor.
  HelloWorld();

  // Message returns a Hello World message.
  std::string Message();
};

}  // namespace hello_world

#endif  // HELLO_WORLD_H_
