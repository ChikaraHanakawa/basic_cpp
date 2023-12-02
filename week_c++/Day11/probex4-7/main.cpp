#include <iostream>
#include <list>

int main(){;
    std::string input;
    std::string num;
    std::list<std::string> li;
    std::list<std::string>::iterator itr;
    while(1){
        std::cout << "文字列を入力:";
        std::getline(std::cin,input);
        if(input.empty()) break;
        li.push_back(input);
    }
    for(auto itr = li.begin(); itr != li.end();){
        if(itr->length() >= 5){
            itr = li.erase(itr);
        } else {
            std::cout << *itr << " ";
            ++itr;
        }
    }
    std::cout << std::endl;
}