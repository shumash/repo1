#include <iostream>
using namespace std;

namespace first_n {

// This is my first class!
class MyClass {
public:
  MyClass() : internal_variable_(0) {}

  MyClass(int i) : internal_variable_(i) {}

  void print() const {
    cout << "i = " << internal_variable_;
  }

private:
  int internal_variable_;
};

}  // namespace first_n
