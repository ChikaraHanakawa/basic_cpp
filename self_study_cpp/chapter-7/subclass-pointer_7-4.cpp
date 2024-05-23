#include <iostream>

class Base{
    public:
        void method_Base();
};

void Base::method_Base(){
    std::cout << "Base::method_Base()" << std::endl;
}

class Derived : public Base{
    public:
        void method_Derived();
};

void Derived::method_Derived(){
    std::cout << "Derived::method_Derived()" << std::endl;
}

int main(){
    //DerivedはBaseのメンバ関数を継承しているから呼び出せる
    Derived derived;
    derived.method_Base();
    derived.method_Derived();
    //基底クラスへの参照は派生クラスからも可能
    Base& base = derived;
    base.method_Base();
}