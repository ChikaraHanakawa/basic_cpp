#include <iostream>

class product{
    int id;
    std::string name;
    int price;
    public:
        explicit product(int id, std::string name, int price) : id(id), name(name), price(price) {};
        product(){};
};

int main(){
    product p[4] = 
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},
    };
}