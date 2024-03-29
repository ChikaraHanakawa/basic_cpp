#include <iostream>
#include <vector>

class product{
    int id;
    std::string name;
    int price;
    public:
        explicit product(int id, std::string name, int price) : id(id), name(name), price(price) {};
        product(){};
};

int main(){
    std::vector<product> p[4];
    p[0].push_back(product{1, "smart phone", 60000});
    p[1].push_back(product{2, "tablet", 35000});
    p[2].push_back(product{3, "laptop", 80000});
    p[3].push_back(product{4, "desktop", 100000});
}