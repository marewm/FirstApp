//
// Created by Mariia Gordenko on 17.04.2024.
//
#include <iostream>
#include <string>

class Figure {
 private:
  std::string name;
 public:
  void setName(std::string n) {
    name = n;
  }
  std::string getName() {
    return name;
  }
  virtual void info() {
    std::cout << "figure" << '\n';
  }
};

int main() {
  std::cout << "Hello" << '\n';
}