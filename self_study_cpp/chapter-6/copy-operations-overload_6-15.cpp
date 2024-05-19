#include <iostream>

class Integer{
    int value;
    public:
        Integer(int value): value(value) {}
        Integer& operator=(const Integer& rhs);
        void show() const;
};
//コピー代入演算子はコピー元のオブジェクトを変更できないので
//constで参照を受け取る
Integer& Integer::operator=(const Integer& rhs){
    std::cout << "コピー：" << value << "->" << rhs.value << std::endl;
    value = rhs.value;
    return *this;
}
void Integer::show() const{
    std::cout << value << std::endl;
}

int main(){
    Integer x = 42;
    Integer y = 10;
    y = x;
    y.show();//コピー：10->42
            //value: 42
}