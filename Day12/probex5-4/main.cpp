#include <iostream>
#include <string>
#include <set>

int main(){
    std::string input;
    std::set<std::string> alphabet;
    std::set<std::string>::iterator it;

    std::cout << "英単語を入力:";
    std::cin >> input;
    for(int i = 0; i < input.size(); i++){
        alphabet.insert(input.substr(i,1));
    }
    for(it = alphabet.begin();it != alphabet.end();it++){
        std::cout << *it;
    }
    std::cout << std::endl;
}