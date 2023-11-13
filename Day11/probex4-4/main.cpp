#include <iostream>
#include <vector>
#include <string>

int main(){
    int count = 0;
    int st_max = 0;
    int st_min;
    std::string input;
    std::string max;
    std::string min;
    std::vector<int> max_cou;
    std::vector<int> min_cou;
    std::vector<std::string> v1;

    while(1){
        std::cout << "文字列を入力:";
        std::getline(std::cin, input);
        v1.push_back(input);
        if(input.empty()) break;
        if(v1[count].length() > st_max){
            st_max = v1[count].length();
            max = v1[count];
        }else if(v1[count].length() == st_max){
            max_cou.push_back(count);
        }
        if(v1[count].length() < st_min){
            st_min = v1[count].length();
            min = v1[count];
        }else if(v1[count].length() == st_min){
            min_cou.push_back(count);
        }
        count++;
    }
    std::cout << "最長の単語:" << max;
    for(int i = 0;i < max_cou.size();i++){
        if(v1[max_cou[i]].length() == max.length()){
            std::cout << " " << v1[max_cou[i]];
        }
    }
    std::cout << std::endl;
    std::cout << "最短の単語:" << min;
    for(int i = 0;i < min_cou.size();i++){
        if(v1[min_cou[i]].length() == min.length()){
            std::cout << " " << v1[min_cou[i]];
        }
    }
    std::cout << std::endl;
}