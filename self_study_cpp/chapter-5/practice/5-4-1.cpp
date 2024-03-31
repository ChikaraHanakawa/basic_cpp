#include <iostream>
#include <string>

class OverLoad{
    public:
        OverLoad() : OverLoad(0){}
        explicit OverLoad(int a) : a(a){}
        explicit OverLoad(std::string b) : b(b){}
        ~OverLoad();
        void show();
    private:
        int a;
        std::string b;
};

OverLoad::~OverLoad(){
    std::cout << "オブジェクトのデストラクタ" << std::endl;
}

void OverLoad::show(){
    std::cout << a;
    std::cout << b << std::endl;
}

int main(){
    OverLoad* o = new OverLoad[3]{
        OverLoad{1},
        OverLoad{"hello"}
    };
    o[0].show();
    o[1].show();
    o[2].show();
    delete[] o;
}