#include <iostream>

void dejavu(){
    std::cout <<"global" << std::endl;
}
namespace module{
    void dejavu(){
        std::cout << "module" << std::endl;
    }
}
int main(){
    dejavu();
    module::dejavu();
}