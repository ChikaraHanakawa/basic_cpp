#include <iostream>

class Base{
    int value;
    public:
        Base(int value) : value(value){}
        void show();
};

void Base::show(){
    std::cout << "this : " << this << std::endl
        << "this -> value" << value << std::endl;
}

class DerivedA : public Base{
    public:
        DerivedA(int value) : Base{value}{}
};

class DerivedB : public Base{
    public:
        DerivedB(int value) : Base{value}{}
};

class MoreDerived : public DerivedA, public DerivedB{
    public:
        MoreDerived(int d_a, int d_b) : DerivedA{d_a}, DerivedB{d_b}{}
};

int main(){
    MoreDerived more_derived{42, 72};
    more_derived.DerivedA::show();//DerivedAクラスのshowメンバ関数を呼び出す
    more_derived.DerivedB::show();//DerivedBクラスのshowメンバ関数を呼び出す
    Base& base1 = static_cast<DerivedA&>(more_derived);//DerivedAクラスへの参照をBaseクラスへの参照にキャスト
    base1.show();//Baseクラスのshowメンバ関数を呼び出す
    Base& base2 = static_cast<DerivedB&>(more_derived);//DerivedBクラスへの参照をBaseクラスへの参照にキャスト
    base2.show();//Baseクラスのshowメンバ関数を呼び出す
}