#include <iostream>

class A{
    public:
        operator int() const{
            return 0;
        }
};
class B{
    public:
        //explicit指定されたintへの変換関数
        explicit operator int() const{
            return 0;
        }
};

int main(){
    A a;
    int ia = 1;//変換関数はexplicit指定されていないので，暗黙的にintへ変換される
    char ca = a;//intに暗黙変換されたあと，charに代入される
    B b;
    int ib = b;//error:　変換関数がexplicit指定されているので，暗黙的にBからintへ変換されない
    char cb = b;//error:　intへの暗黙変換ができないので，charへの代入もできない
    int j(b);//変数jは変換関数の戻り値で初期化されるので，intへの変換が行われる
    int k = static_cast<int>(b);//明示的にキャストした場合は変換関数が呼ばれる
}