#include <iostream>

class Integer{
    int value;
    public:
        Integer(int value) : value(value){}
        Integer operator+(const Integer& rhs) const;
        Integer operator-(const Integer& rhs) const;
        Integer operator*(const Integer& rhs) const;
        Integer operator/(const Integer& rhs) const;
        void show() const;
};

Integer Integer::operator+(const Integer& rhs) const{
    return Integer(value + rhs.value);
}
Integer Integer::operator-(const Integer& rhs) const{
    return Integer(value - rhs.value);
}
Integer Integer::operator*(const Integer& rhs) const{
    return Integer(value * rhs.value);
}
Integer Integer::operator/(const Integer& rhs) const{
    return Integer(value / rhs.value);
}
void Integer::show() const{
    std::cout << value << std::endl;
}

int main(){
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;
    auto v = x - y / y + z *x;
    v.show();
    return 0;
}
