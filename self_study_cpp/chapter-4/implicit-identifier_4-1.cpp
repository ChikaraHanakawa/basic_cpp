#include <iostream>

int main(){
    std::cout << "__FILE__ :" << __FILE__ << std::endl;// ファイル名
    std::cout << "__LINE__ :" << __LINE__ << std::endl;// 行番号
    std::cout << "__func__ :" << __func__ << std::endl;// 関数名
    std::cout << "__cplusplus__ :" << __cplusplus << std::endl;// C++のバージョン
    int line = __LINE__;

    std::cout << "line :" << line << "__LINE__: " << __LINE__ << std::endl;
}