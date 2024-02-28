#include <iostream>

class A{
    int value;

    public:
        void set_value(int value);
        int get_value() const;
};

void A::set_value(int value){
    this->value = value;
}

int A::get_value() const{
    return value;
}

int main(){
    A a;
    a.set_value(42);
    std::cout << a.get_value() << std::endl;
}
