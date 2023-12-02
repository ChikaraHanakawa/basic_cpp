#include <iostream>

bool judge(int);

int main(){
  int n;
  std::cout << "整数を入力:";
  std::cin >> n;
  if(judge(n)){
    std::cout << "この整数は0以上です。" << std::endl;
  }else{
    std::cout << "この整数は0未満です。" << std::endl;
  }
  return 0;
}

bool judge(int n){
  if(n >= 0){
    return true;
  }else{
    return false;
  }
}
