#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream out{"hello_eog.txt"};

    out << "Hello, EOF" << std::endl;

    out.close();

    std::ifstream in{"hello_eog.txt"};

    std::string line;
    std::getline(in, line);
    std::cout << line << std::endl;
    std::cout << "ファイル末尾？" << std::boolalpha << in.eof() << std::endl;
}