#include <iostream>

class Base{
    public:
        explicit Base(int value){
            std::cout << value << std::endl;
        }
};

class DerivedA : virtual public Base{
    public:
        DerivedA() : Base{1}{}
};

class DerivedB : virtual public Base{
    public:
        DerivedB() : Base{2}{}
};

class MoreDerived : public DerivedA, public DerivedB{
    public:
        MoreDerived() : Base{3}{}
};

class MoreMoreDerived : public MoreDerived{
    public:
        MoreMoreDerived() : Base{4}{}
};

int main(){
    MoreDerived mmd;
    return 0;
}