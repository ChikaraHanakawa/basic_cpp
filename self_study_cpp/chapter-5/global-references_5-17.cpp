#include <iostream>

int x;
int& get_x(){
    return x;
}

int main(){
    x = 10;
    int& y = get_x();
    y = 100;
    std::cout << x << std::endl;
}