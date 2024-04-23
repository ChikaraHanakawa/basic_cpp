#include <iostream>

void show(int v){
    std::cout << v << std::endl;
}
void enumerate(int* begin, int* end, void (*func)(int)){
    for(int* p = begin; p != end; ++p){
        func(*p);
    }
}

int main(){
    int array[] = {1, 2, 3, 5, 7, 11, 13};
    std::size_t length = sizeof(array) / sizeof(array[0]);
    enumerate(array, array + length, show);
    return 0;
}