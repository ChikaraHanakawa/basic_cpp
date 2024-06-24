#include <iostream>

class Base{
    public:
        virtual ~Base(){
            std::cout << "Base::~Base()" << std::endl;
        }
};

class Derived : public Base{
    public:
        ~Derived(){
            std::cout << "Derived::~Derived()" << std::endl;
        }
};

Base* allocate(){
    //派生クラスを動的確保するが，関数の戻り値の型が基底クラスへのポインターになっているので暗黙変換によって基底クラスへのポインターが返される
    return new Derived;
}

int main(){
    auto ptr = allocate();
    //コンパイルできるが，受け取っているポインタは基底クラスへのポインタのため，delete演算子は基底クラスのデストラクタを呼び出す．なので，派生クラスのデストラクタは呼び出されるずメモリリークが起きる
    //基底クラスのデストラクタを仮想関数にすれば両方のデストラクタを呼び出せる
    delete ptr;
}