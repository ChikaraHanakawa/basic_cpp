#include <iostream>

class Base{
    public:
        virtual std::string name() const;
        virtual std::string most_name() const = 0;
};
std::string Base::name() const{
    return "Base";
}

class Derived : public Base{
    public:
        std::string name() const override;
};
std::string Derived::name() const{
    return "Derived";
}

class MoreDerived : public Derived{
    public:
        virtual std::string name() const;
        virtual std::string most_name() const override;
};
std::string MoreDerived::name() const{
    return "MoreDerived";
}
std::string MoreDerived::most_name() const{
    return "MoreDerived, most_name";
}

int main(){
    MoreDerived derived;
    std::cout << derived.name() << std::endl;
    std::cout << derived.most_name() << std::endl;
}