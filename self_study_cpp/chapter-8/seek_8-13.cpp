#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ofstream out("hello_seek.txt");
    out << "Hello, Seek!" << std::endl;
    std::cout << "現在の位置: " << out.tellp() << std::endl;
    out.seekp(7);
    out << "File Seek" << std::endl;
    out.close();

    std::ifstream in("hello_seek.txt");
    in.seekg(in.tellg() + std::streamoff(12)); // 現在の位置から12バイト進める
    std::string line;
    std::getline(in, line);
    std::cout << line << std::endl;
}