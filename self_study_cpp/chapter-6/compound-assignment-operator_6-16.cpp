#include <iostream>

class Integer{
    int value;
    public:
        Integer(int value): value(value) {}
        Integer& operator+=(const Integer& rhs);
        Integer& operator-=(const Integer& rhs);
        Integer& operator*=(const Integer& rhs);
        Integer& operator/=(const Integer& rhs);
        void show() const;
};

Integer& Integer::operator+=(const Integer& rhs){
    value += rhs.value;
    return *this;
}
Integer& Integer::operator-=(const Integer& rhs){
    value -= rhs.value;
    return *this;
}
Integer& Integer::operator*=(const Integer& rhs){
    value *= rhs.value;
    return *this;
}
Integer& Integer::operator/=(const Integer& rhs){
    value /= rhs.value;
    return *this;
}
void Integer::show() const{
    std::cout << value << std::endl;
}

int main(){
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;
    z *= x;//z = 70
    y /= y;//y = 1
    x -= y;//x = 9
    x += z;//x = 79
    x.show();//79
}