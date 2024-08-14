#include <fstream>
#include <iostream>

int main(){
    std::ofstream out{"hello_binary.bin", std::ios::binary};

    const char value[] = {0, 1, 2};
    out.write(value, sizeof(value));

    out.close();

    std::ifstream in{"hello_binary.bin", std::ios::binary};

    char buffer[10];
    in.read(buffer, 10);

    std::cout << in.gcount() << std::endl;
}