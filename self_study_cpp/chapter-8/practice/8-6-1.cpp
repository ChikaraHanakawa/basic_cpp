#include <fstream>
#include <iostream>

int main(){
    std::ofstream out{"8-6.txt", std::ios::binary};
    const char text[] = {"I'm studying C++."};
    out.write(text, sizeof(text));
    out.close();

    std::ifstream in{"8-6.txt", std::ios::binary};
    char buffer[18];
    if(in.read(buffer, 18)){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    std::cout << in.gcount() << std::endl;
    in.close();
}