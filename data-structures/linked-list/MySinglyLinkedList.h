//
// Created by yingbingzhu on 2025/4/21.
//

#pragma once

#include <cstddef>
#include <stdexcept>

// A basic singly linked list

template <typename T>
class MySinglyLinkedList {
  private:
    struct Node {
      T data;
      Node* next;
      Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t sz;
  public:
    MySinglyLinkedList() : head(nullptr), tail(nullptr), sz(0) {}

    ~MySinglyLinkedList() {
      clear();
    }

    void push_front(const T& value) {
      Node* newNode = new Node(value);
      newNode->next = head;
      head = newNode;
      if (sz == 0) {
        tail = newNode;
      }
      ++sz;
    }

    void push_back(const T& value) {
      Node* newNode = new Node(value);
      if (sz == 0) {
        head = tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      ++sz;
    }

    void pop_front() {
      if (!head) {
        throw std::underflow_error("List is empty");
      }
      Node* temp = head;
      head = head->next;
      delete temp;
      --sz;
      if (sz == 0) {tail = nullptr;}
    }

    void remove(const T& value) {
      Node* current = head;
      Node* prev = nullptr;
      while (current) {
        if (current->data == value) {
          if (prev) prev->next = current->next;
          else head = current->next;
          if (current == tail) tail = prev;
          delete current;
          --sz;
          return;
        }
        prev = current;
        current = current->next;
      }
    }

    T& operator[](const size_t index) {
      if (index >= sz) throw std::out_of_range("Index out of range");
      Node* current = head;
      for (size_t i = 0; i < index; ++i) current = current->next;
      return current->data;

    }

    size_t size() const {
      return sz;
    }
    bool empty() const {
      return sz == 0;
    }

    void clear() {
      while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
      }
      head = tail = nullptr;
      sz = 0;
    }
};