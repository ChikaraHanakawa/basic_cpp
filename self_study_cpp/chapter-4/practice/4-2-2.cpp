#include <iostream>

class A{
    int m_v;
    public:
        explicit A(int v){};
        int v() const{
            return m_v;
        };
};

int main(){
    A y(42);
    y.v() == 42;
}