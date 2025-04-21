#include <iostream>
#include "MyVector.h"

int main() {
  MyVector<int> myVector;
  myVector.push_back(10);
  myVector.push_back(20);
  std::cout << "Size: " << myVector.size() << std::endl;
  myVector.pop_back();
  std::cout << "Size: " << myVector.size() << std::endl;
  std::cout << "Element at index 0: " << myVector[0] << std::endl;

  try {
    std::cout << "Accessing out of range: " << myVector[5] << std::endl;
  } catch (const std::out_of_range& e) {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }


  return 0;
}