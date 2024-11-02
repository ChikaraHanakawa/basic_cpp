#include <iostream>

template<typename T>
class Parent{
    public:
        virtual void show(){
            std::cout << "Parent" << std::endl;
        }
};

template<typename T>
class Child : public Parent<T>{
    public:
        void show() override{
            std::cout << "Child" << std::endl;
        }
};

int main(){
    Parent<int> p;
    Child<int> c;
    p.show();
    c.show();
}