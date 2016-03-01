/*
 * braced-init-list can be used for subscript (8.5.4 List-initialization
 * [dcl.init.list]), though it shall not be used with the built-in
 * subscript operator (5.2.1 Subscripting [expr.sub]).
 */
#include <initializer_list>

template<typename T>
class A {
  public:
  T operator[] (std::initializer_list<T> l) {
    T sum;
    for (T t : l) {
      sum += t;
    }
    return sum;
  }
};

int main() {
  A<int> a;
  int sum = a[{1,2,3}];
  return 0;
}
