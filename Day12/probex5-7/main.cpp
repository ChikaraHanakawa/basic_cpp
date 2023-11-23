#include <iostream>
#include <string>
#include <stack>

int main(){
    std::string input;
    std::stack<std::string> sta;
    std::cout << "英単語を入力:";
    std::cin >> input;

    for(int i = 0;i < input.size();i++){
        sta.push(input.substr(i,1));
    }
    while(!sta.empty()){
        std::cout << sta.top();
        sta.pop();
    }
    std::cout << std::endl;
}