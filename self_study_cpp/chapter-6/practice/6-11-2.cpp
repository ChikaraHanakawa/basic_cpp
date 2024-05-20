#include <iostream>

class A{
    public:
        void foo() const{};
};
class B{
    A a;
    public:
        operator A() const{
            return a;
        };
};

int main() {
    B b;
    static_cast<A>(b).foo();//キャストしないとBにfooがないのでエラー
    return 0;
}