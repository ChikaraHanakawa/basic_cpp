#include <iostream>

class A{
    int m_v;
    std::string m_n;
    public:
        A(int, std::string);
        A(float);
};

A::A(int v, std::string n) : m_v(v), m_n(n){}//OK
A::A(float) : A{-1, "float"}{}//OK
int main(){
    A ap(42, "0");//OK
    A ab(42, "0");//OK

    A bp = A(42, "0");//OK
    A bb = A{42, "0"};//OK

    A cp = (42, "0");//error
    A cb = {42, "0"};//OK

    A dp = (42, 0.0);//OK, A(int, float)ではなくA(float)が呼び出される
    A db = {42, 0.0};//error doubleからstd::stringへの変換はできない

    double pi = 3.14159265356;
    A ep(pi);//OK doubleからfloatへの暗黙変換が行われる
    A eb{pi};//error doubleからfloatへの変換はできない
}