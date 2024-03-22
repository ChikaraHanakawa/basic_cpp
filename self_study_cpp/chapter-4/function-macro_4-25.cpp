#include <iostream>

void hello(){
    std::cout << "hello, macro" << std::endl;
}
#define id(name)name

int main(){
    id(hello)();
}