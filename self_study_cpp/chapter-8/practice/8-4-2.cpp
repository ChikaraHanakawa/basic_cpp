#include <iostream>
#include <iomanip>

int main(){
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    std::cout << std::right << std::setw(8) << std::setfill('0') << n << std::endl;
}
