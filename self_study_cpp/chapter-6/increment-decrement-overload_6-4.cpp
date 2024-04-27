#include <iostream>

class Integer{
    int value;
    public:
        Integer(int value): value(value){}
        Integer& operator++();
        Integer& operator--();
        Integer operator++(int);
        Integer operator--(int);
        void show() const;
};

Integer& Integer::operator++(){
    ++value;
    return *this;
}
Integer& Integer::operator--(){
    --value;
    return *this;
}
Integer Integer::operator++(int){
    auto tmp = *this;
    ++*this;
    return tmp;
}
Integer Integer::operator--(int){
    auto tmp = *this;
    --*this;
    return tmp;
}
void Integer::show() const{
    std::cout << value << std::endl;
}

int main(){
    Integer x = 10;
    ++x;
    x.show();
    x++;
    x.show();
    --x;
    x.show();
    x--;
    x.show();
}