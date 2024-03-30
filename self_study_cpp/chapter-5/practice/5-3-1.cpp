#include <iostream>

class dynamic{
    public:
        dynamic(){
            std::cout << "dynamic constructor" << std::endl;
        }
        ~dynamic(){
            std::cout << "dynamic destructor" << std::endl;
        }
};

int main(){
    dynamic* d = new dynamic();
    delete d;
    return 0;
}