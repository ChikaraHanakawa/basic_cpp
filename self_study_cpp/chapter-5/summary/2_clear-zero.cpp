#include <iostream>
#include <vector>

std::vector<int> arr = {1, 2, 3, 4, 5};
int clear(int &n){
    if(n == 0){
        arr.clear();
    }
    return 0;
}

int main(){
    int n = 0;
    for(auto i : arr){
        std::cout << i << " " << std::endl;
    }
    clear(n);
    for(auto i : arr){
        std::cout << i << " " << std::endl;
    }
    return 0;
}