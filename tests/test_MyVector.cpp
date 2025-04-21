//
// Created by yingbingzhu on 2025/4/21.
//

#include <gtest/gtest.h>
#include "MyVector.h"

TEST(MyVectorTest, PushAndAccess) {
  MyVector<int> vec;
  vec.push_back(42);
  vec.push_back(7);

  EXPECT_EQ(vec.size(), 2);
  EXPECT_EQ(vec[0], 42);
  EXPECT_EQ(vec[1], 7);
}
