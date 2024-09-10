#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ifstream binfile("hello_binary.bin", std::ios::binary);
    std::vector<char> buffer(25);
    binfile.read(buffer.data(), buffer.size());
    std::streamsize read = binfile.gcount();
    for (int i = 0; i < 25; i++){
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;
    binfile.close();
}