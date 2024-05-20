#include <iostream>

class Formula{
    int value;
    public:
        Formula() : value(value){} 
        int operator+(int);
        int operator-(int);
        int operator*(int);
        int operator/(int);
        int operator=(int);
        void show() const;
};

int Formula::operator+(int num){
    return value + num;
}
int Formula::operator-(int num){
    return value - num;
}
int Formula::operator*(int num){
    return value * num;
}
int Formula::operator/(int num){
    return value / num;
}
int Formula::operator=(int num){
    return value = num;
}
void Formula::show() const{
    std::cout << "value: " << value << std::endl;
}

int main(){
    Formula f;
    f = 10 + 5 * 3 - 2 / 2;
    f.show();
}