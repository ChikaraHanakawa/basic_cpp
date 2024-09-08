#include <iostream>
#include <fstream>

int main(){
    std::ofstream output("fool.txt");
    output << "Hello, World!";
    output.close();

    std::ifstream input("fool.txt", std::ios::in | std::ios::ate);
    
    // ファイルを開いて末尾に移動したときのストリームのエラー状況を確認
    auto state = input.rdstate();
    if(state & std::ios::eofbit){
        std::cout << "End of input reached" << std::endl;
    }else if(state & std::ios::failbit){
        std::cout << "Non-fatal I/O error" << std::endl;
    }else if(state & std::ios::badbit){
        std::cout << "Fatal I/O error" << std::endl;
    }else{
        std::cout << "Stream is good" << std::endl;
    }

    // 1文字読み込んでストリームのエラー状況を確認
    input.get();
    state = input.rdstate();
    if(state & std::ios::eofbit){
        std::cout << "End of input reached" << std::endl;
    }else if(state & std::ios::failbit){
        std::cout << "Non-fatal I/O error" << std::endl;
    }else if(state & std::ios::badbit){
        std::cout << "Fatal I/O error" << std::endl;
    }else{
        std::cout << "Stream is good" << std::endl;
    }

    input.close();
}