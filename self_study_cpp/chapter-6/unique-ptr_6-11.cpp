#include <iostream>
#include <utility>
#include <memory>

class A{
    public:
        A(){
            std::cout << "コンストラクタ" << std::endl;
        }
        ~A(){
            std::cout << "デストラクタ" << std::endl;
        }
};

std::unique_ptr<A> allocate(){
    std::cout << "allocate()" << std::endl;
    std::unique_ptr<A> ptr{new A{}};
    return std::move(ptr);
}

int main(){
    {
        std::unique_ptr<A> ptr;
        std::cout << "関数呼び出しの前" << std::endl;
        ptr = allocate();//ここでptrにメモリ領域の所有権が移動される
        std::cout << "関数呼び出しの後" << std::endl;
    }
    //だから、関数呼び出しの後にptrが破棄される
    std::cout << "スコープの後" << std::endl;
}