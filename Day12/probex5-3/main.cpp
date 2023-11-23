#include <iostream>
#include <set>
#include <cstdlib>
#include <vector>

int main(){
    std::vector<int> vec;
    std::srand(time(nullptr));
    std::set<int> set;
    std::set<int>::iterator it;

    for(int i = 0; i < 10; ++i){
        vec.push_back(std::rand() % 10);
        set.insert(vec[i]);
    }
    std::cout << "乱数:";
    for(int i = 0; i < 10; ++i){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "出現した数値:";
    for(it = set.begin();it != set.end();++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}