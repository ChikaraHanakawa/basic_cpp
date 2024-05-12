#include <iostream>
//オブジェクトのポインタを参照する演算子をオーバーロードする

class A{
    public:
        A* operator& ();
        const A* operator&() const;
};

A* A::operator&(){
    std::cout << "this:" << this << std::endl;
    return this;
}

const A* A::operator&() const{
    std::cout << "this(const):" << this << std::endl;
    return this;
}

int main(){
    A a;
    A* pointer = &a;
}