#include <iostream>

class Base{
    //保護メンバ
    protected:
        void protected_member(){
            std::cout << "Base::protected_member()" << std::endl;
        }
};

class Derived : public Base{
    public:
        void member_test();
};

void Derived::member_test(){
    protected_member();
}

int main(){
    Derived derived;
    //error
    //derived.protected_member();
    //OK
    derived.member_test();
}