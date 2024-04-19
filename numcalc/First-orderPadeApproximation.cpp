#include <iostream>
#include <cmath>
#include <vector>

class Calc{
    double Denominator, Numerator, ans;
    double a, b, c;
    std::vector<double> e;
    public:
        Calc();
        ~Calc();
        void mcloughlin(double x);
        void approximation();
        void pade();
};

Calc::Calc(){
    std::cout << "Constructor called" << std::endl;
    Denominator = 1.0;
    Numerator = 1.0;
    a, b, c = 1.0;
    ans = 0.0;
}
Calc::~Calc(){
    std::cout << "Destructor called" << std::endl;
    e.clear();
}
void Calc::mcloughlin(double x){
    for(int n = 0; n < 10; n++){
        Denominator = x * n;
        if(n == 0){
            e.push_back(Denominator / 1.0);
            continue;
        }
        Numerator *= n + 1;
        e.push_back(Denominator/Numerator);
    }
}
void Calc::approximation(){
    a = -1 * (e[2] * e[3]);
    b = e[2];
    c = e[1];
}
void Calc::pade(){
    for(int n = 0; n < 4; n++){
        ans = (b + c)/(a + 1);
        a *= a;
        b *= b;
        c *= c;
        std::cout << ans << std::endl;
    }
}

int main(){
    Calc c;
    c.mcloughlin(2);
    c.approximation();
    c.pade();
    return 0;
}