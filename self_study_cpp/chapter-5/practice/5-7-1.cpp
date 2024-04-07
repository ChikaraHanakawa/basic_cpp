#include <iostream>

int value = 0;

int& function(){
    //int value = 0;
    return value;
}

int main(){
    int& value= function();
    value = 10;
}

//valueがグローバル変数でないため、function関数が終了すると参照先がなくなるため、エラーが発生する。