#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Resize){
  Stack* s = new Stack();
  for(int i=0; i<13; ++i){
    s->push(i);
  }

  EXPECT_EQ(12, s->peek());
  delete s;
}


TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}


