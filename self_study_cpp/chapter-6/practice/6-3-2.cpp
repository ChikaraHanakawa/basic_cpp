#include <iostream>

class Integer{
    int value;
    public:
        Integer(int value) : value(value){}
        Integer operator++() const;
        Integer operator--() const;
        Integer operator++(int) const;
        Integer operator--(int) const;
        int getValue() const;
};

Integer Integer::operator++() const{
    std::cout << "Pre-incrementing " << value << std::endl;
    return Integer(value + 1);
}
Integer Integer::operator--() const{
    std::cout << "Pre-decrementing " << value << std::endl;
    return Integer(value - 1);
}
Integer Integer::operator++(int) const{
    std::cout << "Post-incrementing " << value << std::endl;
    return Integer(value + 1);
}
Integer Integer::operator--(int) const{
    std::cout << "Post-decrementing " << value << std::endl;
    return Integer(value - 1);
}
int Integer::getValue() const{
    return value;
}
int main(){
    Integer a = 10;
    auto v = a++;
    std::cout << "Value: " << v.getValue() << std::endl;
    v = a--;
    std::cout << "Value: " << v.getValue() << std::endl;
    v = ++a;
    std::cout << "Value: " << v.getValue() << std::endl;
    v = --a;
    std::cout << "Value: " << v.getValue() << std::endl;
    return 0;
}