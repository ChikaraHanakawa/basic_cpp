#include <iostream>
#include <map>
#include <string>
int main(){
    std::string input;
    std::map <std::string ,std::string> jisho;
    std::string eng[] = {"cat", "dog", "bird", "tiger"};
    std::string jpn[] = {"猫", "犬", "鳥", "トラ"};
    for(int i = 0; i < 4; i++){
        jisho[eng[i]] = jpn[i];
    }
    std::cout << "英語で動物の名前を入力して下さい : ";
    std::cin >> input;
    if(jisho.count(input) != 0){
        std::cout << "「" << jisho[input] << "」です。" << std::endl;
    }else{
        std::cout << "対応するデータは登録されていません" << std::endl;
    }
    return 0;
}