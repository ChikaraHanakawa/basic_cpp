#include <iostream>
#include <vector>

int main(){
    int input;
    int count = 0;
    std::vector<int> v1;
    std::vector<int> rank0, rank1, rank2, rank3, rank4, rank5, rank6, rank7, rank8, rank9;
    while(1){
        std::cout << "正の整数を入力:";
        std::cin >> input;
        v1.push_back(input);
        if(v1[count] == -1){
            break;
        }
        count++;
    }
    for(int i = 0;i < v1.size();i++){
        if(v1[i] % 10 == 0){
            rank0.push_back(v1[i]);
        }else if(v1[i] % 10 == 1){
            rank1.push_back(v1[i]);
        }else if(v1[i] % 10 == 2){
            rank2.push_back(v1[i]);
        }else if(v1[i] % 10 == 3){
            rank3.push_back(v1[i]);
        }else if(v1[i] % 10 == 4){
            rank4.push_back(v1[i]);
        }else if(v1[i] % 10 == 5){
            rank5.push_back(v1[i]);
        }else if(v1[i] % 10 == 6){
            rank6.push_back(v1[i]);
        }else if(v1[i] % 10 == 7){
            rank7.push_back(v1[i]);
        }else if(v1[i] % 10 == 8){
            rank8.push_back(v1[i]);
        }else if(v1[i] % 10 == 9){
            rank9.push_back(v1[i]);
        }
    }
    if(rank0.size() != 0){
        std::cout << "0の位の数字:";
        for(int i = 0;i < rank0.size();i++){
            std::cout << rank0[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank1.size() != 0){
        std::cout << "1の位の数字:";
        for(int i = 0;i < rank1.size();i++){
            std::cout << rank1[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank2.size() != 0){
        std::cout << "2の位の数字:";
        for(int i = 0;i < rank2.size();i++){
            std::cout << rank2[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank3.size() != 0){
        std::cout << "3の位の数字:";
        for(int i = 0;i < rank3.size();i++){
            std::cout << rank3[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank4.size() != 0){
        std::cout << "4の位の数字:";
        for(int i = 0;i < rank4.size();i++){
            std::cout << rank4[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank5.size() != 0){
        std::cout << "5の位の数字:";
        for(int i = 0;i < rank5.size();i++){
            std::cout << rank5[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank6.size() != 0){
        std::cout << "6の位の数字:";
        for(int i = 0;i < rank6.size();i++){
            std::cout << rank6[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank7.size() != 0){
        std::cout << "7の位の数字:";
        for(int i = 0;i < rank7.size();i++){
            std::cout << rank7[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank8.size() != 0){
        std::cout << "8の位の数字:";
        for(int i = 0;i < rank8.size();i++){
            std::cout << rank8[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
    if(rank9.size() != 0){
        std::cout << "9の位の数字:";
        for(int i = 0;i < rank9.size();i++){
            std::cout << rank9[i] << " ";
        }
        std::cout << std::endl;
    }else{
        std::cout << "なし" << std::endl;
    }
}