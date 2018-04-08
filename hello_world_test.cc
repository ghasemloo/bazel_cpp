#include "hello_world.h"

#include <iostream>

#include "gtest/gtest.h"

namespace {

TEST(HelloWorld, Message) {
  auto msg = hello_world::HelloWorld().Message();
  EXPECT_EQ(msg, "Hello World!");
}

}
