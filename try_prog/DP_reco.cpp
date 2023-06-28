#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <filesystem>

std::string file_number1, file_number2, filename_tmp="/city/city_.txt";

class DPmatting{
  private:
  public:
    void fileopen();
    void calculation();
}
void DPmatting::fileopen(std::string directory_pas1, std::string directory_pas2){
  std::filesystem::directory_iterator e = std::filesystem::directory_iterator(directory_pas);
  for(auto f : e){
    f.path().string();
  }
}
int main(){
  std::cin << file_number1;
  std::cin << file_number2;
  if(file_number1 >= 100 && file_number2 >= 100){
    std::cout << "Fuck!!!" << std::endl;
  }
  std::string directory_pas1 = filename_tmp.insert(5, file_number1);
  directory_pas1.insert(13, filenumber1);
  directory_pas1.insert(18, filenumber1);
  std::string directory_pas2 = filename_tmp.insert(5, file_number1);13m18
  directory_pas2.insert(13, filenumber2);
  directory_pas2.insert(18. filenumber2);

  DPmatting *ma;
  ma->fileopen(directory_pas1, directory_pas2);
}
