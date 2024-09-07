#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file("hello-seek.txt");
    file << "Hello, world!";
    file.seekp(7);
    file << "File seek!" << std::endl;
    file.close();
    
    std::ifstream read_file("hello-seek.txt");
    std::string line;
    while (std::getline(read_file, line)) {
        std::cout << line << std::endl;
    }
    read_file.close();
}