#include <iostream>
#include "collectionint.cpp"

int main(){
    int array[] = {1, 5, 4, 2, 3};
    double array2[] = {1.2, 3.5, 8.1, 4.9, 2.2};
    Collection<int>* c = new Collection<int>(array);
    Collection<double>* c2 = new Collection<double>(array2);
    c -> showArray();
    std::cout << "最大値:" << c -> getMax() << std::endl;
    std::cout << "最小値:" << c -> getMin() << std::endl;
    c2 -> showArray();
    std::cout << "最大値:" << c2 -> getMax() << std::endl;
    std::cout << "最小値:" << c2 -> getMin() << std::endl;
    delete c;
    delete c2;
    return 0;
}