#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream out;
    // テキストモードで書き出し用（暗黙）に空にしてから開く
    out.open("hello_file.txt", std::ios::trunc);
    out << "Hello, File IO" << std::endl;

    out.close();

    // テキストモードで読み込み用（明示）に開く
    std::ifstream in("hello_file.txt", std::ios::in);

    std::string line;
    std::getline(in, line);

    std::cout << line << std::endl;
}