#include <iostream>

class Base {
public:
    explicit Base(int x) {
        std::cout << "Base constructor called with value: " << x << std::endl;
    }
};

class DerivedA : virtual public Base {
public:
    explicit DerivedA(int x) : Base(x) {
        std::cout << "DerivedA constructor called" << std::endl;
    }
};

class DerivedB : virtual public Base {
public:
    explicit DerivedB(int x) : Base(x) {
        std::cout << "DerivedB constructor called" << std::endl;
    }
};

class MoreDerived : public DerivedA, public DerivedB {
public:
    explicit MoreDerived(int x) : Base(x), DerivedA(x), DerivedB(x) {
        std::cout << "MoreDerived constructor called" << std::endl;
    }
};

int main() {
    MoreDerived mmd(3);
    return 0;
}