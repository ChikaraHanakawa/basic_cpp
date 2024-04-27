#include <iostream>

class Float{
    float f;
    public:
        Float(float f) : f(f){}
        Float operator+() const;
        Float operator-() const;
        Float operator+(const Float& a) const;
        Float operator-(const Float& a) const;
        Float operator*(const Float& a) const;
        Float operator/(const Float& a) const;
        void show() const;
};

Float Float::operator+() const{
    return *this;
}
Float Float::operator-() const{
    return -*this;
}
Float Float::operator+(const Float& a) const{
    return Float(f + a.f);
}
Float Float::operator-(const Float& a) const{
    return Float(f - a.f);
}
Float Float::operator*(const Float& a) const{
    return Float(f * a.f);
}
Float Float::operator/(const Float& a) const{
    return Float(f / a.f);
}
void Float::show() const{
    std::cout << f << std::endl;
}

int main(){
    Float a = 10.5;
    Float b = 20.5;
    Float c = 15.3;
    auto result = a + b - c * a / b;
    result.show();
    return 0;
}
