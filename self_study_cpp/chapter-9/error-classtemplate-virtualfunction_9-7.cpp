#include <iostream>

class Base{
    public:
        virtual void foo(int i){
            std::cout << "Base::foo()" << std::endl;
        }
};

template <typename T>
class Derived : public Base{
    // Baseクラスのfoo関数をオーバーライドしたいが，Tによって引数の型が異なるため，オーバーライドできない
    void foo(T val) override{
        std::cout << "Derived::foo()" << std::endl;
    }
};

int main(){
    Derived<int> di;
    static_cast<Base&>(di).foo(3);
    // エラー
    // 仮想関数の仮引数の型が異なるため，オーバーライドできない
    Derived<float> df;
}