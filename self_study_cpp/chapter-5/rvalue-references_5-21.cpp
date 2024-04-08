#include <iostream>

int main(){
    int&& i = 0;
    int&& j = 0;

    std::cout << "&i: " << &i << std::endl;
    std::cout << "&j: " << &j << std::endl; 
}