auto f() {
  return [](int p, int q) {
    struct {
      int x;
      int y;
    } a({p, q});
    return a;
  }(1, 2);
}

int main() {
  auto a = f();
  int x = a.x;
}
