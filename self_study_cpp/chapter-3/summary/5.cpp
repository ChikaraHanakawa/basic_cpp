#include <iostream>

class A{
    private:
        static int a;
    public:
        void change_num() const;
        static int get_num();
};

int A::a = 0;

void A::change_num() const{
    a = 1;
}
int A::get_num(){
    return a;
}

int main(){
    A b;
    b.change_num();
    std::cout << b.get_num() << std::endl;
    return 0;
}