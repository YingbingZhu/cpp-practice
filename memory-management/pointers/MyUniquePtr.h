//
// Created by yingbingzhu on 2025/4/23.
//

#pragma once

#include <iostream>

template <typename T>
class MyUniquePtr {
  private:
    T* ptr;
  public:
    explicit MyUniquePtr(T* ptr = nullptr) : ptr(ptr) {}
    ~MyUniquePtr() {delete ptr;}

    //prevent copying
    MyUniquePtr(const MyUniquePtr&) = delete; // delete copy constructor
    MyUniquePtr& operator=(const MyUniquePtr&) = delete; // delete the copy assignment operator
    // move constructor
    MyUniquePtr(MyUniquePtr&& other) noexcept {
      ptr = other.ptr;
      other.ptr = nullptr;
    }

  MyUniquePtr& operator=(MyUniquePtr&& other) noexcept {
    if (this != &other) { // avoid self-assignment
      delete ptr;          //delete current resource
      ptr = other.ptr;      // take other's resource
      other.ptr = nullptr;
    }
    return *this; // return myself
  }

};
