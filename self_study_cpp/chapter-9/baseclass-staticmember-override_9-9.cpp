#include <iostream>

struct S_shared{
    static int value;
};

int S_shared::value = 0;

template <typename T>
class S_override :  public S_shared{
};

int main(){
    std::cout << "S<int>::value = " << S_override<int>::value << std::endl;
    std::cout << "S<float>::value = " << S_override<float>::value << std::endl;

    std::cout << "&S<int>::value = " << &S_override<int>::value << std::endl;
    std::cout << "&S<float>::value = " << &S_override<float>::value << std::endl;

    S_override<int>::value = 42;

    std::cout << "S<int>::value = " << S_override<int>::value << std::endl;
    std::cout << "S<float>::value = " << S_override<float>::value << std::endl;
}