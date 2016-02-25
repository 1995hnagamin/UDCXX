int f() {
  struct S {
    static int g() { return 42; }
  };
  return S::g();
}

int main() {
  int x = f();
}
