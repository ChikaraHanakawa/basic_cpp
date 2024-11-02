#include <iostream>

struct S_shared{
    static int value;
};

int S_shared::value = 0;

template <typename T>
class S :  public S_shared{
};

int main(){
    std::cout << "S<int>::value = " << S<int>::value << std::endl;
    std::cout << "S<float>::value = " << S<float>::value << std::endl;

    std::cout << "&S<int>::value = " << &S<int>::value << std::endl;
    std::cout << "&S<float>::value = " << &S<float>::value << std::endl;

    S<int>::value = 42;

    std::cout << "S<int>::value = " << S<int>::value << std::endl;
    std::cout << "S<float>::value = " << S<float>::value << std::endl;
}