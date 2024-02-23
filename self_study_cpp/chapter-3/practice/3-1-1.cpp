#include <iostream>

class A{
    int v;
    public:
        void set(int value);
        int get() const;
};

void A::set(int value){
    v = value;
}

int A::get() const{
    return v;
}

int main(){
    A a;
    a.set(42);
    const A& ca = a;
    ca.get();
}