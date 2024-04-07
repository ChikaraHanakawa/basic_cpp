#include <iostream>

class reciever{
    int& a;
    public:
        reciever(int& a) : a(a){}
        int& position(){
            return a;
        }
        const int& position(int& a) const{
            return a;
        }
};

int main(){
    int x = 10;
    int& y = x;
    reciever r = {x};
    r.position() = 100;
    std::cout << x << std::endl;
    r.position(y);//constメンバ関数を呼び出す
    std::cout << x << std::endl;
    return 0;
}