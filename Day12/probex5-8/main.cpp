#include <iostream>
#include <string>
#include <queue>

int main(){
    std::string input;
    std::queue<std::string> que;
    std::cout << "英単語を入力:";
    std::cin >> input;

    for(int i = input.size();i >= 0;i--){
        que.push(input.substr(i, 1));
    }
    while(!que.empty()){
        std::cout << que.front();
        que.pop();
    }
    std::cout << std::endl;
    return 0;
}