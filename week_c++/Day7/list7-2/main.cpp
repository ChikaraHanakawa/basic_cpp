#include <iostream>
#include "Sample.cpp"

int main(){
  Sample* p1, p2;
  p1 = new Sample(1); // 引数のあるコンストラクタ
  p2 = new Sample(); // デフォルトコンストラクタの呼び出し（エラー）
  return 0;
}
