#include <iostream>

template<typename A, typename B, typename C>
struct Tuple{
    A a;
    B b;
    C c;
    void show(){
        std::cout << a << " " << b << " " << c << std::endl;
    }
};

template<typename A, typename C>
struct Tuple<A, void, C>{
    A a;
    C c;
    void show(){
        std::cout << a << " " << c << std::endl;
    }
};

int main(){
    Tuple<int, double, char> t1{1, 2.2, 'a'};
    t1.show();
    Tuple<int, void, char> t2{1, 'a'};
    t2.show();
}