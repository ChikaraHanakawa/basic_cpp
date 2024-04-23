#include <iostream>
#include <vector>

class Array{
    int n;
    public:
        Array();
        ~Array();
        int getN();
        void allcate(int n);
};

Array::Array(){}
Array::~Array(){
}
int Array::getN(){
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "n = " << n << std::endl;
    return n;
}
void Array::allcate(int n){
    int *ary = new int(n);
    std::cout << &ary << std::endl;
    for(int i = 0; i < n; i++){
        ary = 0;
    }
    delete[] ary;
}

int main(){
    Array a;
    a.allcate(a.getN());
    return 0;
}