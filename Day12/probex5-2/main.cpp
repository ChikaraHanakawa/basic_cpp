#include <iostream>
#include <string>
#include <map>
#include <stack>
#include <vector>

bool isInteger(const std::string &s){
    if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;
    char * p;
    strtol(s.c_str(), &p, 10);
    return (*p == 0);
}

int main(){
    std::string input;
    std::stack<std::string> sta;
    std::vector<std::string> vec;
    std::map<char, std::string> word_number;

    word_number['0'] = "○";
    word_number['1'] = "一";
    word_number['2'] = "二";
    word_number['3'] = "三";
    word_number['4'] = "四";
    word_number['5'] = "五";
    word_number['6'] = "六";
    word_number['7'] = "七";
    word_number['8'] = "八";
    word_number['9'] = "九";

    std::cout << "整数の値を入力して下さい:";
    std::cin >> input;

    if(!isInteger(input)){
        std::cout << "整数の値を入力して下さい" << std::endl;
        return 0;
    }

    for(int i = 0; i < input.size(); i++){
        sta.push(word_number[input[i]]);
    }

    int count = 0;
    while(!sta.empty()){
        vec.push_back(sta.top());
        sta.pop();
        count++;
        if(count % 3 == 0 && !sta.empty()){
            vec.push_back(",");
        }
    }

    std::cout << "変換結果:";
    for(int i = vec.size()-1; i >= 0; i--){
        std::cout << vec[i];
    }
    std::cout << std::endl;
}
