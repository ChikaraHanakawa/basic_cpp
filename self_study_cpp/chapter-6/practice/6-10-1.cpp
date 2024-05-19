#include <iostream>

class Float{
    float f;
    public:
        Float(float f) : f(f){}
        friend Float operator+(const Float& a, const Float& b);
        friend Float operator-(const Float& a, const Float& b);
        friend Float operator*(const Float& a, const Float& b);
        friend Float operator/(const Float& a, const Float& b);
        Float& operator=(const Float& a);
        void show() const;
};

Float operator+(const Float& a, const Float& b){
    return Float(a.f + b.f);
}
Float operator-(const Float& a, const Float& b){
    return Float(a.f - b.f);
}
Float operator*(const Float& a, const Float& b){
    return Float(a.f * b.f);
}
Float operator/(const Float& a, const Float& b){
    return Float(a.f / b.f);
}
Float& Float::operator=(const Float& a){
    f = a.f;
    return *this;
}
void Float::show() const{
    std::cout << f << std::endl;
}

int main(){
    Float a = 10.5;
    Float b = 20.5;
    Float c = 15.3;
    a = b + c;
    Float d = a;
    Float result = a + b - c * a / b - d;
    result.show();//-6.21902
    return 0;
}