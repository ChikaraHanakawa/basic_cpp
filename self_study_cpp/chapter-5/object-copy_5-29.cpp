#include <iostream>

class C{
    int a;
    public:
        explicit C(int a): a(a){}
        void copy_and_set(int value)const{
            std::cout << "copy_and_set:a" << value << std::endl;
            [*this, value] mutable{
                std::cout << "lambda:a" << a << std::endl;
                //a = value; // error: assignment of member 'C::a' in read-only object
                a = value;
                std::cout << "lambda:a" << a << std::endl;
            }();
            std::cout << "copy_and_set:a" << a << std::endl;
        }
};

int main(){
    C c(42);
    c.copy_and_set(43);
    return 0;
}