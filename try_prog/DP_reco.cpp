#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <filesystem>

std::string file_number1, file_number2;
std::string filename_tmp="/city/city_.txt";
std::string directory_pas1, directory_pas2;

class DPmatting{
  private:
    std::vector<std::string> template_data = {};
  public:
    void fileopen();
    void calculation();
};

void DPmatting::fileopen(){
  std::filesystem::directory_iterator e = std::filesystem::directory_iterator(directory_pas1);
  for(auto f : e){
    if(f <= 2){
      template_data[] = f.path().string();
    }
  }
  std::cout << template_data[] << std::endl;
  //return template_data[];
}
/*
void DPmatting::calculation(){
}*/

int main(){
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
}
