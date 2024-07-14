#include <iostream>

class Base{
    public:
        void method_Base(){
            std::cout << "Base: " << this << std::endl;
        }
};

//DerivedAは仮想基底クラスとしてBaseを継承
class DerivedA : virtual public Base{
    public:
        void method_DerivedA(){
            std::cout << "DerivedA: " << this << std::endl;
        }
};

class DerivedB : virtual public Base{
    public:
        void method_DerivedB(){
            std::cout << "DerivedB: " << this << std::endl;
        }
};

class MoreDerived : public DerivedA, public DerivedB{
    public:
        void method_MoreDerived(){
            std::cout << "MoreDerived: " << this << std::endl;
        }
};

int main(){
    MoreDerived more_derived;
    more_derived.method_Base();
    more_derived.method_DerivedA();
    more_derived.method_DerivedB();
    more_derived.method_MoreDerived();
    Base& base = more_derived;
    //Baseの参照を取得
    base.method_Base();
}