#include <iostream>

class Integer{
    int value;
    public:
        Integer(int value) : value{value}{}
        bool operator==(const Integer& rhs) const;
        bool operator!=(const Integer& rhs) const;
        bool operator<(const Integer& rhs) const;
        bool operator>(const Integer& rhs) const;
        bool operator<=(const Integer& rhs) const;
        bool operator>=(const Integer& rhs) const;
};

bool Integer::operator==(const Integer& rhs) const{
    return value == rhs.value;
}
bool Integer::operator!=(const Integer& rhs) const{
    return value !=(*this == rhs);
}
bool Integer::operator<(const Integer& rhs) const{
    return value < rhs.value;
}
bool Integer::operator>(const Integer& rhs) const{
    return value > rhs.value;
}
bool Integer::operator<=(const Integer& rhs) const{
    return value <= rhs.value;
}
bool Integer::operator>=(const Integer& rhs) const{
    return value >= rhs.value;
}

int main(){
    Integer x = 10;
    Integer y = 3;
    if(x != y){
        std::cout << "x != yはture" << std::endl;
    }else{
        std::cout << "x != yはfalse" << std::endl;
    }
    if(y >= x){
        std::cout << "y >= xはture" << std::endl;
    }else{
        std::cout << "y >= xはfalse" << std::endl;
    }
    if(x < y){
        std::cout << "x < yはture" << std::endl;
    }else{
        std::cout << "x < yはfalse" << std::endl;
    }
    if(x > y){
        std::cout << "x > yはture" << std::endl;
    }else{
        std::cout << "x > yはfalse" << std::endl;
    }
    if(x <= y){
        std::cout << "x <= yはture" << std::endl;
    }else{
        std::cout << "x <= yはfalse" << std::endl;
    }
}