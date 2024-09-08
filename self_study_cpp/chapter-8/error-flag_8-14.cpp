#include <iostream>
#include <fstream>

int main(){
    std::ofstream out("hello_error.txt");
    out << "Hello, error!" << std::endl;
    out.close();

    std::ifstream input("hello_error.txt");

    while(input.good()){
        input.get();
        auto state = input.rdstate();
        if(state & std::ios::eofbit){
            std::cout << "End of input reached" << std::endl;
        }else if(state & std::ios::failbit){
            std::cout << "Non-fatal I/O error" << std::endl;
        }else if(state & std::ios::badbit){
            std::cout << "Fatal I/O error" << std::endl;
        }
    }
}