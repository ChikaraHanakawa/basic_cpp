#include <iostream>
#include <stack>
#include <queue>

int main(){
    std::stack<int> stk;
    std::queue<int> que;
    int data[] = {1, 2, 3};
    for(int i = 0;i < 3;i++){
        stk.push(data[i]);
        que.push(data[i]);
    }
    std::cout << "stack : ";
    while(!stk.empty()){
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << std::endl;
    std::cout << "queue : ";
    while(!que.empty()){
        std::cout << que.front() << " ";
        que.pop();
    }
    std::cout << std::endl;
    return 0;
}