#include <iostream>
#include <string>
#include <stack>

int main(){
    std::string input;
    std::stack<std::string> sta;
    while(1){
        std::cout << "文字列を入力:";
        std::getline(std::cin, input);
        if(input.empty()) break;
        sta.push(input);
    }
    while(!sta.empty()){
        std::cout << sta.top() << std::endl;
        sta.pop();
    }
}