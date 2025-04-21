//
// Created by yingbingzhu on 2025/4/21.
//

#pragma once
#include <cstddef>
#include <stdexcept>

template<typename T>
class MyVector {
  private:
    T* data;
    size_t sz;
    size_t cap;

    void resize_if_needed() {
      if (sz >= cap) {
        cap = (cap == 0) ? 1: 2 * cap;
        T* new_data = new T[cap];
        for (size_t i = 0; i < sz; i++) {
          new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
      }
    };

   public:
     MyVector() : data(nullptr), sz(0), cap(0) {}
     ~ MyVector() {
       delete[] data;
     };

     void push_back(const T& value) {
       resize_if_needed();
       data[sz++] = value;
     };
     void pop_back() {
       if (sz == 0) {
         throw std::underflow_error("pop_back() called on empty vector");
       }
       --sz; // don't need the value
     }

     T& operator[](size_t index) {
       if (index >= sz) {
         throw std::out_of_range("index out of range");
       }
       return data[index];
     };

     const T& operator[](size_t index) const { // used by const objects
       if (index >= sz) {
         throw std::out_of_range("index out of range");
       }
       return data[index];
     }

     size_t size() const {
       return sz;

     }
     size_t capacity() const {
       return cap;
     }
     bool empty() const {
       return sz == 0;
     }

     void clear() { // logically remove all elements, but keep the memory space
       sz = 0;
     }
};
