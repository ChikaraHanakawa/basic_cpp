#include <iostream>
#include <list>

int main(){
    int input;
    std::list<int> li;
    std::list<int>::iterator itr;
    while(1){
        std::cout << "正の整数を入力:";
        std::cin >> input;
        if(input == -1) break;
        li.push_back(input);
    }
    li.remove(2);
    for(itr = li.begin();itr != li.end();itr++){
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}