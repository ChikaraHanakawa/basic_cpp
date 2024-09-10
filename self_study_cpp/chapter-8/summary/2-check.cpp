#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string line;
    std::cin >> line;
    std::ofstream file(line);
    file << "Hello, World!" << std::endl;
    file.close();

    std::ifstream console_output(line);
    std::string output;
    std::getline(console_output, output);
    std::cout << output << std::endl;
    console_output.close();
    return 0;
}