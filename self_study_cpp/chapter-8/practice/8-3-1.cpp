#include <iostream>

int main(){
    char word[100];
    while(1){
        std::cout << "You : ";
        std::cin.getline(word, 100);
        if(word[0] == '\0')
            break;
        std::cout << "ParrotGPT : " << word << std::endl;
    }
    return 0;
}
