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
    using module::dejavu;
    dejavu();
    module::dejavu();
}