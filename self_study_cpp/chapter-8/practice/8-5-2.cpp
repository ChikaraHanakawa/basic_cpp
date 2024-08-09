#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::fstream file{"8-5-2.cpp"};
    std::string line;
    while(true){
        std::getline(file, line);
        std::cout << line << std::endl;
        if(file.eof()) break;
    }
}