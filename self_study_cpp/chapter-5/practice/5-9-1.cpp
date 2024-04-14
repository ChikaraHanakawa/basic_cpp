#include <iostream>

//関数ポインタ
int function_pointer(int (*f)(int), int x){
    return f(x);
}
//高階関数
int square(int x){
    return x*x;
}
//高階関数
int triangle(int x){
    return x*(x+1)/2;
}

int main(){
    std::cout << function_pointer(&square, 5) << std::endl;
    std::cout << function_pointer(&triangle, 5) << std::endl;
}
