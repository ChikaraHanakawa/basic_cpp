#include <iostream>

class Solution{
    int value;
    public:
        Solution(int value) : value{value}{}
        bool operator==(const Solution& other) const;
        bool operator!=(const Solution& other) const;
        bool operator<=(const Solution& other) const;
        bool operator>=(const Solution& other) const;
        bool operator>(const Solution& other) const;
};

bool Solution::operator==(const Solution& other) const{
    return value == other.value;
}
bool Solution::operator!=(const Solution& other) const{
    return value != (*this == other);
}
bool Solution::operator<=(const Solution& other) const{
    return value <= other.value;
}
bool Solution::operator>=(const Solution& other) const{
    return value >= other.value;
}
bool Solution::operator>(const Solution& other) const{
    return value > other.value;
}

int main(){
    Solution x = 10;
    Solution y = 3;
    if(x != y){
        std::cout << "x != yはtrue" << std::endl;
    }else{
        std::cout << "x != yはfalse" << std::endl;
    }
    if(y >= x){
        std::cout << "y >= xはtrue" << std::endl;
    }else{
        std::cout << "y >= xはfalse" << std::endl;
    }
}