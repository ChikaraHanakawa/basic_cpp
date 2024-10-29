#include <iostream>

class S{
    public:
        template <typename T>
        void foo(T value){
            std::cout << "Generic foo" << std::endl;
        }
        // 宣言と定義を分ける場合
        template <typename T>
        void bar(T value);
};

// 普通のメンバー関数定義にtemplateが付いただけ
template <typename T>
void S::bar(T value){
    std::cout << "Generic bar" << std::endl;
}

int main(){
    S s;
    s.foo<int>(0);
    s.bar<float>(10.0f);
}