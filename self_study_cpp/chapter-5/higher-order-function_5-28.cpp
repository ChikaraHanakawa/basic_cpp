#include <iostream>

void filtered_show(int (&array)[5], bool(*predicate)(int)){
    for(int e: array){
        if(predicate(e)){
            std::cout << e << std::endl;
        }
    }
}

bool is_odd(int v){
    return (v % 2) == 1;
}

bool is_less_than_5(int v){
    return v < 5;
}

int main(){
    int array[] = {5, 10, 3, 0, 1};
    filtered_show(array, &is_odd);
    std::cout << std::endl;
    filtered_show(array, &is_less_than_5);
}