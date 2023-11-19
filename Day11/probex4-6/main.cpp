#include <iostream>
#include <list>

int main(){
    int input;
    std::list<int> li;
    while(1){
        std::cout << "正の整数を入力:";
        std::cin >> input;
        if(input == -1) break;
        li.push_back(input);
        li.sort();
        std::cout << "入力した数値:";
        for(auto itr = li.begin(); itr != li.end(); ++itr){
            std::cout << *itr << " ";
        }
        std::cout << std::endl;
    }
}