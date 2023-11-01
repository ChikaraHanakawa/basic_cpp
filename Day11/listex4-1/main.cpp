#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> v1;
    std::vector<std::string> v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back("ABC");
    v2.push_back("DEF");
    unsigned int i;
    for(i = 0; i < v1.size(); i++){
        std::cout << "v1[" << i << "]=" << v1[i] << std::endl;
    }
    for(i = 0; i < v2.size(); i++){
        std::cout << "v2[" << i << "]=" << v2[i] << std::endl;
    }
    return 0;
}