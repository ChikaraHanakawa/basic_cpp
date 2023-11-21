#include <iostream>
#include <string>
#include <map>

int main(){
    std::map<std::string, int> score;
    std::string names[] = {"Tom", "Bob", "Mike"};
    score[names[0]] = 100;
    score[names[1]] = 80;
    score[names[2]] = 120;
    for(int i = 0;i < 3;i++){
        std::cout << names[i] << ":" << score[names[i]] << std::endl;
    }
}