#include <iostream>
#include "collectionint.cpp"

int main(){
    int array[] = {1, 5, 4, 2, 3};
    double array2[] = {1.1, 5.5, 4.4, 2.2, 3.3};
    Collection<int>* c = new Collection<int>(array, 5.0);
    Collection<double>* c2 = new Collection<double>(array2, 5.0);
    c -> showArray();
    c2 -> showArray();
    std::cout << "最大値:" << c -> getMax() << std::endl;
    std::cout << "最小値:" << c -> getMin() << std::endl;
    std::cout << "最大値:" << c2 -> getMax() << std::endl;
    std::cout << "最小値:" << c2 -> getMin() << std::endl;
    delete c;
    delete c2;
    return 0;
}