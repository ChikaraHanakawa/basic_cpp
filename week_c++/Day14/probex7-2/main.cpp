#include <iostream>
#include <string>
#include "newstring.h"

int main(){
    NewString s1("Hello World"), s2;
    std::cout << s1.getValue() << std::endl;
    s2 = s1;
    std::cout << s2.getValue() << std::endl;
    NewString s3(s2);
    std::cout << s3.getValue() << std::endl;
    NewString s4("HELLO WORLD");
    std::cout << s4.getValue() << std::endl;
    return 0;
}