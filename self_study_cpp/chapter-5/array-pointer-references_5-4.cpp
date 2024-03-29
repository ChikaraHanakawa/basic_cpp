#include <iostream>

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &array;
    for(int e: *ptr){
        std::cout << e << std::endl;
    }
    std::cout << std::endl;
    int (&ref)[5] = array;
    for(int e: ref){
        std::cout << e << std::endl;
    }
}