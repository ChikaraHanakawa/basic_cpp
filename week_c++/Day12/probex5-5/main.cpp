#include <iostream>
#include <string>
#include <queue>

int main(){
    std::string input;
    std::queue<std::string> qu;
    while(1){
        std::cout << "文字列を入力:";
        std::getline(std::cin, input);
        if(input.empty()) break;
        qu.push(input);
    }
    while(!qu.empty()){
        std::cout << qu.front() << std::endl;
        qu.pop();
    }
}