#include <iostream>

class Counter{
    int value;
    public:
        Counter() : value(0) {}
        int operator()();//引数なしの関数呼び出し演算子のオーバーロード
        int operator()(int n);//仮引数1つの関数呼び出し演算子のオーバーロード
        void show() const;
};

//引数がないときにはインクリメントして今のカウンターを返す
int Counter::operator()(){
    return ++value;
}

//引数で具体的な増減値が与えられたときにはその数だけ増減させる
int Counter::operator()(int n){
    return value += n;
}

void Counter::show() const{
    std::cout << "Counter value =" << value << std::endl;
}

int main(){
    Counter c;
    c();
    c();
    c();
    c(10);
    c.show();//Counter value = 13
}