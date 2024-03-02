#include <iostream>

class A{
    private:
        int c = 0;
    public:
        void a(int c);
};

class B: public A{
    public:
        void a();
};

void A::a(int c){
    std::cout << c << std::endl;
}

void B::a(){
    std::cout << "cを表示できない" << std::endl;
}

int main(){
    B b;
    b.a();
    return 0;
}