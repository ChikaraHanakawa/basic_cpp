#include <iostream>
#include <list>

int main(){
    std::list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_front(3);
    std::list<int>:: iterator itr;
    itr = li.begin();
    itr++;
    li.insert(itr, 4);
    for(itr = li.begin(); itr != li.end(); itr++){
        std::cout << *itr << "";
    }
    std::cout << std::endl;
    return 0;
}