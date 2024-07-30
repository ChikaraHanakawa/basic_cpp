#include <iostream>
#include <iomanip>// 入出力マニピュレーターを使用するために必要なヘッダファイル

int main(){
    // std::hexマニピュレーターによって16進数での表示に変更
    std::cout << std::hex << 1234 << std::endl;

    // マニピュレーターで浮動小数点の精度を変更する
    std::cout << std::setprecision(6) << 1234.56789f << std::endl;

    // フラグをセットしても，マニピュレーターでクリアできる
    std::cout.setf(std::ios::boolalpha);
    std::cout << std::noboolalpha << true << std::endl;
}
