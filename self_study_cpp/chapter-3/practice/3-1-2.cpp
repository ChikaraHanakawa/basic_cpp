#include <iostream>

class B{
    int v;
    public:
        void set(int value);
        int get() const;
        int get();
};

void B::set(int value){
    v = value;
}
int B::get() const{
    return v;
}
int B::get(){
    return v;
}

int main(){
    B b;
    b.set(42);
    B& rb = b;
    const B& cb = b;
    rb.get();
    cb.get();
}