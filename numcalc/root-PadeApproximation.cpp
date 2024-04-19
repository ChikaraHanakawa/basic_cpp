#include <iostream>
#include <cmath>

class PadeApproximant{
    double n, x, t;
    double Numerator;
    double Denominator;
    public:
        PadeApproximant();
        ~PadeApproximant();
        double getNum();
        void calc();
};
PadeApproximant::PadeApproximant(){
    std::cout << "Constructor called" << std::endl;
}
PadeApproximant::~PadeApproximant(){
    std::cout << "Destructor called" << std::endl;
}
double PadeApproximant::getNum(){
    std::cout << "Enter the value of x, n, and t: ";
    std::cin >> x >> n >> t;
    std::cout << "x = " << x << ", n = " << n << ", t = " << t << std::endl;
    return x, n, t;
}
void PadeApproximant::calc(){
    double r = std::sqrt(x);
    int Rounding_off_r = r;
    if(r - Rounding_off_r > 0.5){
        Rounding_off_r += 1;
    }
    Numerator = ((n + 1) * x) + ((n - 1) * t);
    Denominator = ((n -1) * x) + ((n + 1) * t);
    std::cout << Numerator << std::endl << "───" << std::endl << Denominator << std::endl;
    double ans = (Numerator * Rounding_off_r) / Denominator;
    std::cout << "= " << ans << std::endl;
}

int main(){
    PadeApproximant p;
    p.getNum();
    p.calc();
    return 0;
}