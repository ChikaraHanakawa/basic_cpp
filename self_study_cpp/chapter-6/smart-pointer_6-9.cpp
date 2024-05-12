#include <iostream>//何も管理しないスマートポインタ

class int_observer_ptr{
    int* pointer;
    public:
        explicit int_observer_ptr(int* pointer) : pointer {pointer}{}
        int& operator*() const;//関節参照演算子
};

int& int_observer_ptr::operator*() const{
    return *pointer;
}

int main(){
    int value = 0;
    int_observer_ptr pointer(& value);
    std::cout << *pointer << std::endl;
    value = 42;
    std::cout << *pointer << std::endl;
}