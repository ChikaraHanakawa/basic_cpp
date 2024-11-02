#include <iostream>

template <typename T>
class Stack{
    public:
        static int value;
};

template <typename T>
int Stack<T>::value = 0;

int main(){
    std::cout << "Stack<int>::value = " << Stack<int>::value << std::endl;
    std::cout << "Stack<float>::value = " << Stack<float>::value << std::endl;

    std::cout << "&Stack<int>::value = " << &Stack<int>::value << std::endl;
    std::cout << "&Stack<float>::value = " << &Stack<float>::value << std::endl;

    Stack<int>::value = 42;

    // インスタンス化されたクラステンプレートのstaticメンバ変数は，クラステンプレートの特殊化ごとに別のstaticメンバ変数を持つ
    // そのため，Stack<int>::valueとStack<float>::valueは別のstaticメンバ変数を持つ
    std::cout << "Stack<int>::value = " << Stack<int>::value << std::endl;
    std::cout << "Stack<float>::value = " << Stack<float>::value << std::endl;
}