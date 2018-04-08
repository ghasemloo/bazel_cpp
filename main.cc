#include <iostream>

#include "hello_world.h"

int main(int argc, char** argv) {
  auto msg = hello_world::HelloWorld().Message();
  std::cout << "stdout: " << msg << std::endl;
  std::cerr << "stderr: " << msg << std::endl;
  return 0;
}
