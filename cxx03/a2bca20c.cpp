namespace A {
  int override() { return 42; }
}

namespace B {
  enum override {
    override
  };
}

namespace override {
  class override {
    public:
      int override;
  };
}

int main() {
  override::override x;
  x.override = A::override();
}
