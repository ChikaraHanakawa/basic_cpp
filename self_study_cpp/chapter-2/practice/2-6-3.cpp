#include <iostream>

int main(){
    std::string i;
    do{
        std::cout << "何か入力して下さい" << std::endl;
        std::getline(std::cin, i);
    }while (i != ""); // do-while
    std::cout << i << std::endl;
}