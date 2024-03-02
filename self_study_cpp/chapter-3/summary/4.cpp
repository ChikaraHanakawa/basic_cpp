#include <iostream>

class A{
    private:
        int a = 0;
    public:
        friend A show(A& b);
};

A show(A& b){
    A c;
    c.a = b.a;
    std::cout << c.a << std::endl;
    std::cout << "friend" << std::endl;
    return c;
}

int main(){
    A d;
    A e = show(d);
    return 0;
}