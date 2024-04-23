#include <iostream>


int receive(int &&num){
    return num;
}
double receive(double &&num){
    return num;
}
float receive(float &&num){
    return num;
}

int main(){
    std::cout << receive(1) << std::endl;
    std::cout << receive(2.0) << std::endl;
    std::cout << receive(3.0) << std::endl;
    return 0;
}