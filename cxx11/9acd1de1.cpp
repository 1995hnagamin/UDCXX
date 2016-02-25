int f() {
  return []() {
    struct {
      int g() { return 42; }
    } a;
    return a.g();
  }();
}

int main() {
  int x = f();
}
