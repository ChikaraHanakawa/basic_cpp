#include <iostream>
#include <utility>

class A{
    int n_land;
    public:
        A(int n):n_land(n){}
        A(const A& a):n_land(a.n_land){ // コピーコンストラクタ
            std::cout << "Copy constructor called" << std::endl;
        }
        A(A&& a):n_land(a.n_land){ // ムーブコンストラクタ
            a.n_land = 0;
            std::cout << "Move constructor called" << std::endl;
        }
        int land() const{return n_land;}
};

int main(){
    A a{100};
    std::cout << "aの土地:" << a.land() << std::endl;
    A b{a}; // コピーコンストラクタが呼ばれる
    std::cout << "bの土地:" << b.land() << std::endl;
    A c{std::move(a)}; // ムーブコンストラクタが呼ばれる
    std::cout << "cの土地:" << c.land() << std::endl;
    std::cout << "aの土地:" << a.land() << std::endl;
}