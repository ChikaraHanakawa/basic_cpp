#include <iostream>
#include <vector>

int main(){
    int input;
    int v_max;
    int v_min;
    int count = 0;
    std::vector<int> v1;
    while(1){
        std::cout << "正の実数を入力:";
        std::cin >> input;
        v1.push_back(input);
        if(v1[count] == -1){
            break;
        }
        if(v1[count] > v_max){
            v_max = v1[count];
        }else if(v1[count] < v_min){
            v_min = v1[count];
        }
        count++;
    }
    std::cout << "最大値:" << v_max << std::endl;
    std::cout << "最小値:" << v_min << std::endl;
}