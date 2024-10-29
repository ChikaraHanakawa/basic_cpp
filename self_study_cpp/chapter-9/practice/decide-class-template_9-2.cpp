#include <iostream>

template <typename T>
class mother{
    public:
        T value;
        // メンバー関数をテンプレートクラス内で定義
        void show(){
            std::cout << "I have " << value << " mother!" << std::endl;
        };
        // メンバー関数をテンプレートクラス外で定義
        void som_show(T v);
};

void som_show(int v){
    std::cout << "My mother have " << v << " som!" << std::endl;
}

int main(){
    mother<int>{3}.show();
    mother<float>{5.3f}.show();
    som_show(10);
    return 0;
}