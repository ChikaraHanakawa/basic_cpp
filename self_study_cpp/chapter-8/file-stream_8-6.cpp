#include <iostream>
#include <iomanip>
#include <fstream>// ファイルの入出力
#include <string>

int main(){
    std::ofstream out;// ファイル出力用のオブジェクト
    out.open("hello_file.txt");// ファイルを開く
    // ファイルに文字を出力
    out << "Hello, File IO" << std::endl;
    out << std::setprecision(4) << std::scientific << 12.34567f << std::endl;
    out.close();// 操作終了したので閉じる

    // 入力用のオブジェクトを作成すると同時にファイルを開くこともできる
    std::ifstream in("hello_file.txt");
    std::string line;
    std::getline(in, line);// ファイルから1行だけ入力
    float f;
    in >> f;

    std::cout << line << std::endl;// 入力した1行をterminalに出力
    std::cout << f << std::endl;

    in.close();
}