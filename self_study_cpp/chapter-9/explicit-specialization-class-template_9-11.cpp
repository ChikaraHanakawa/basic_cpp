#include <iostream>
#include <string>

template <typename T>
class Base{
    public:
        std::string name() const{
            return "Aのプライマリテンプレート";
        }
        void common_method(){
            std::cout << "共通動作" << std::endl;
        }
};

template<>
class Base<int>{
    public:
        std::string name() const{
            return "A<int>の明示的特殊化";
        }
        void common_method(){
            std::cout << "共通動作" << std::endl;
        }
};

int main(){
    Base<float> f;
    std::cout << f.name() << std::endl;
    Base<int> i;
    std::cout << i.name() << std::endl;
}