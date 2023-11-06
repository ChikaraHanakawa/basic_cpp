#include "plase.h"
#include <iostream>
#include <vector>

Place::Plase(){
}
Place::~Place(){
}
Place::sort_place(std::vector array){
    if(array.size() != 0){
        std::cout << "0の位の数字:";
        for(int i = 0;i < array.size();i++){
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
}