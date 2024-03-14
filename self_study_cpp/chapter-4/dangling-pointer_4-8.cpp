#include <iostream>

int* dangling_pointer(){
    int i = 0;
    return &i;// dangling_pointer
}

int main(){
    int* p = dangling_pointer();
    *p = 42;//危険
}