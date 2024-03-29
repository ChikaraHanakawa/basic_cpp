#include <iostream>

void reverse(int array[], int size){
    for(int i = 0; i < size / 2; ++i){
        int tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
}

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    reverse(array, 5);
    for(int e: array){
        std::cout << e << std::endl;
    }
}