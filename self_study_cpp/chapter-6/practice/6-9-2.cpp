#include <iostream>

class Float{
    float f;
    public:
        Float(float f) : f(f){}
        friend Float operator+(const Float& a, const Float& b);
        friend Float operator-(const Float& a, const Float& b);
        friend Float operator*(const Float& a, const Float& b);
        friend Float operator/(const Float& a, const Float& b);
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
void Float::show() const{
    std::cout << f << std::endl;
}

int main(){
    Float a = 10.5;
    Float b = 20.5;
    Float c = 15.3;
    Float result = a + b - c * a / b;
    result.show();
    return 0;
}