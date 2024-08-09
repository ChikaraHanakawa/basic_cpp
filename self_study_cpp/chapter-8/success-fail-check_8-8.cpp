#include <fstream>
#include <iostream>

int main(){
    // 読み込みのみのファイルを書き込みで開く
    std::ofstream of{"readonly.txt"};
    if(of.is_open()){
        std::cout << "オープン成功" << std::endl;
    }
    else{
        std::cout << "オープン失敗" << std::endl;
    }
}