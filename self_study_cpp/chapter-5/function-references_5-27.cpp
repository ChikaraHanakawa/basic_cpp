#include <iostream>

int identity(int v){
    return v;
}

int square(int v){
    return v * v;
}

int main(){
    int (&func)(int) = identity;
    std::cout << "func(4):" << func(4) << std::endl;
    func = square;// Error: 参照先を後から変更することはできない
}