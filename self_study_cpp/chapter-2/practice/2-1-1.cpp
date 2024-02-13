#include <iostream>

struct product{
    int id;
    int price;
    int stock;
};

void show_product(product* p){
    std::cout << "商品ID:" << p->id << std::endl;
    std::cout << "価格:" << p->price << std::endl;
    std::cout << "在庫数:" << p->stock << std::endl;
}

int main(){
    product pen ={
        0,
        100,
        200,
    };
    show_product(&pen);
}