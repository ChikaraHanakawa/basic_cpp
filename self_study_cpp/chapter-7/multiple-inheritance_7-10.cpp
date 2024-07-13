#include <iostream>

class BaseA{
    public:
        void method_BaseA(){
            std::cout << "BaseA::method_BaseA()" << std::endl;
        }
};

class BaseB{
    public:
        void method_BaseB(){
            std::cout << "BaseB::method_BaseB()" << std::endl;
        }
};

//多重継承
class Derived : public BaseA, public BaseB{
    public:
        void method_Derived(){
            std::cout << "Derived::method_Derived()" << std::endl;
        }
};

int main(){
    Derived d;
    d.method_BaseA();//BaseAから継承したメンバ関数を呼び出す
    d.method_BaseB();//BaseBから継承したメンバ関数を呼び出す
    d.method_Derived();//Derivedクラスのメンバ関数を呼び出す
    BaseA& base_a = d;//DerivedクラスはBaseAクラスの派生クラスなので、BaseAクラスへの参照を取得できる
    base_a.method_BaseB();//base_aはBaseAクラスの参照なので、BaseBクラスのメンバ関数を呼び出すことはできない
    base_a.method_derived();//base_aはBaseAクラスの参照なので、Derivedクラスのメンバ関数を呼び出すことはできない
    BaseB& base_b = d;//DerivedクラスはBaseBクラスの派生クラスなので、BaseBクラスへの参照を取得できる
    base_b.method_BaseA();//base_bはBaseBクラスの参照なので、BaseAクラスのメンバ関数を呼び出すことはできない
    base_b.method_Derived();//base_bはBaseBクラスの参照なので、Derivedクラスのメンバ関数を呼び出すことはできない
}