#include <iostream>
class A{
    public:
        void foo(){
            std::cout << "A::for" << std::endl;
        }
};
class B{
    A a;
    public:
        operator A&(){
            return a;
        }
};

int main(){
    B b;
    b.foo();//error:　Bはfooメンバ関数を持っていない
}
//foo関数を呼び出したければ，キャストを行い対応する変換関数を呼ぶ必要がある