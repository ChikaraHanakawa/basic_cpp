#include <iostream>

void hello(){
    std::cout << "hello, world!" << std::endl;
}
void goodbye(){
    std::cout << "goodbye, world!" << std::endl;
}

int main(){
    hello();
    std::cout << "hello, macro" << std::endl;
    #define hello goodbye
    hello();//マクロがgoodbyeに置き換える
    std::cout << "hello, macro" << std::endl;//文字列中のhelloにはmacroが置き換えられない
}