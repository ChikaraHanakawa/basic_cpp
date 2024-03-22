#include <iostream>

inline int next(int n){
    return n+1;
}

int main(){
    int n = 10;
    std::cout << next(n) << std::endl;
}