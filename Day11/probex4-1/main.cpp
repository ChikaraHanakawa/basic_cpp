#include <iostream>
#include <vector>

int main(){
    int input;
    std::vector<int> v1;
    std::vector<int> even;
    std::vector<int> odd;
    int count = 0;
    while(1){
        std::cout << "正の整数を入力:";
        std::cin >> input;
        v1.push_back(input);
        if(v1[count] == -1){
            break;
        }else if(v1[count] % 2 == 0){
            even.push_back(v1[count]);
        }else {
            odd.push_back(v1[count]);
        }
    count++;
    }
    std::cout << "偶数:";
    for(int i = 0;i < even.size();i++){
        std::cout << even[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "奇数:";
    for(int i = 0;i < odd.size();i++){
        std::cout << odd[i] << " ";
    }
    std::cout << std::endl;
}