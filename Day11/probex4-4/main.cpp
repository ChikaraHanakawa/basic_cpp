#include <iostream>
#include <vector>
#include <string>

int main(){
    int count = 0;
    int max_cou = 0;
    int min_cou = 0;
    int st_max;
    int st_min;
    std::string input;
    std::string max;
    std::string min;
    std::vector<std::string> v1;
    std::vector<std::string> vec_max;
    std::vector<std::string> vec_min;
    while(1){
        std::cout << "文字列を入力:";
        std::cin >> input;
        v1.push_back(input);
        if(input.length() == 0){
            break;
        }
        if(st_max > v1[count].length()){
            st_max = v1[count].length();
            max = v1[count];
        }else if(st_max == v1[count].length()){
            vec_max.push_back(v1[count]);
            max_cou++;
        }
        if(st_min < v1[count].length()){
            st_min = v1[count].length();
            min = v1[count];
        }else if(st_min == v1[count].length()){
            vec_min.push_back(v1[count]);
            min_cou++;
        }
        count++;
    }
    std::cout << "最長の単語:" << max << vec_max[max_cou] << std::endl;
    std::cout << "最短の単語:" << min << vec_min[min_cou] << std::endl;
}