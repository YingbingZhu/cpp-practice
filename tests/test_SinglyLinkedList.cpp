//
// Created by yingbingzhu on 2025/4/22.
//

#include <gtest/gtest.h>
#include "MySinglyLinkedList.h"

TEST(MySinglyLinkedListTest, PushBackWorks) {
  MySinglyLinkedList<int> list;
  list.push_back(5);
  list.push_back(10);
  EXPECT_EQ(list.size(), 2);
  // EXPECT_EQ(list[1], 10);
}

TEST(MySinglyLinkedListTest, RemoveElement) {
  MySinglyLinkedList<int> list;
  list.push_back(1);
  list.push_back(2);
  list.remove(1);
  EXPECT_EQ(list.size(), 1);
  EXPECT_EQ(list[0], 2);
}

