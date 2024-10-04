#include <iostream>

int fused_multiply_add(int a, int b, int c) {
    return a * b + c;
}

float fused_multiply_add(float a, float b, float c) {
    return a * b + c;
}

int main(){
    std::cout << fused_multiply_add(1, 2, 3) << std::endl;
    std::cout << fused_multiply_add(1.23456f, 1.23456f, 1.23456f) << std::endl;
    // 想定していない型で呼び出す
    // 暗黙の型変換が行われる
    std::cout << fused_multiply_add(1.23456, 1, 1.23456) << std::endl;
}