//
// Created by yingbingzhu on 2025/4/24.
//

#include <gtest/gtest.h>
#include "MyUniquePtr.h"

TEST(MyUniquePtrTest, Constructor) {
  MyUniquePtr<int> p1;
  EXPECT_EQ(p1.get(), nullptr);
}

TEST(MyUniquePtrTest, MoveConstructor) {
  MyUniquePtr<int> p1(new int(6));
  MyUniquePtr<int> p2(std::move(p1));
  EXPECT_EQ(p1.get(), nullptr);
  EXPECT_NE(p2.get(), nullptr);
  EXPECT_EQ(*p2.get(), 6);
}