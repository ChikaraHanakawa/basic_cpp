#include <iostream>
#include <cmath>

class PadeApproximant{
    double n, x, t, r;
    double Numerator;
    double Denominator;
    public:
        PadeApproximant();
        ~PadeApproximant();
        double getNum();
        void calc();
        void square_square();
};
PadeApproximant::PadeApproximant(){
    std::cout << "This is a root-only Padé approximation." << std::endl;
}
PadeApproximant::~PadeApproximant(){
    std::cout << "Calclate complete!" << std::endl;
}
double PadeApproximant::getNum(){
    std::cout << "Enter the value of x, n, and t: ";
    std::cin >> x >> n >> t;
    std::cout << "x = " << x << ", n = " << n << ", t = " << t << std::endl;
    return x, n, t;
}
void PadeApproximant::calc(){
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
void PadeApproximant::square_square(){
    if(n == 2){
        r = std::sqrt(x);
    }else if(n == 3){
        r = std::cbrt(x);
    }
}

int main(){
    PadeApproximant p;
    p.getNum();
    p.square_square();
    p.calc();
    return 0;
}