#include <iostream>

int main(){
    char buffer[256];
    std::cin.getline(buffer, 256); // 改行文字が見つかるまで読み込む，改行文字は読み込まれない
    // getline()はヌル文字で終端するのでそのまま文字列として出力して問題ない
    std::cout << "buffer : " << buffer << std::endl;
    // ，を区切り文字として読み込み，区切り文字は残しておく
    std::cin.get(buffer, 256, ',');
    // get()もヌル文字で終端するのでそのまま文字列として出力して問題ない
    std::cout << "buffer : " << buffer << std::endl;

    std::cin.get(buffer, 256, ',');
    // 先頭に前回の区切り文字が残っているので，それを読み飛ばす
    if(buffer[0] == '\0'){
        std::cout << "バッファーは空です" << std::endl;
    }
}
