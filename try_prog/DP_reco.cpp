#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <experimental/filesystem>  // 追加

std::string file_number1, file_number2;
std::string filename_tmp = "/city/city_.txt";
std::string directory_pas1, directory_pas2;

class DPmatting {
private:
    std::vector<std::string> template_data;

public:
    void fileopen();
    void calculation();
};

void DPmatting::fileopen() {
    std::experimental::filesystem::recursive_directory_iterator e(directory_pas1);  // 変更
    int count = 0;  // ファイルの個数をカウントする変数
    for (auto f : e) {
        if (count <= 2) {
            template_data.push_back(f.path().string());
            count++;
        }
    }
    std::cout << template_data[0] << std::endl;
}

void DPmatting::calculation() {
    // ファイルの計算処理を実装する
}

int main() {
    std::cin >> file_number1;
    std::cin >> file_number2;
    directory_pas1 = filename_tmp.insert(5, file_number1);
    directory_pas1.insert(13, file_number1);
    directory_pas1.insert(18, file_number1);
    directory_pas2 = filename_tmp.insert(5, file_number1);
    directory_pas2.insert(13, file_number2);
    directory_pas2.insert(18, file_number2);

    DPmatting d;
    d.fileopen();

    return 0;
}

