#include <iostream>

struct S{
    int x;
    int y;
};
struct T{
    int a;
    int b;
};
union U{
    S s;
    T t;
};

int main(){
    U u = {};
    u.s.x = 10;
    u.s.y = 20;
    u.t.a = 30;
    u.t.b = 40;

    std::cout << u.s.x << std::endl;
    std::cout << u.t.a << std::endl;
}