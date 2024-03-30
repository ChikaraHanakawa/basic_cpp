#include <iostream>

int* local(){
    int i = 42;
    //return &i;//ダングリングポインター
    return new int(i);
};

int* dyn_alloc(){
    int* ptr = new int;
    *ptr = 42;
    return ptr;
};

int main(){
    //int* l = local(); //local()で作ったローカル変数iはローカルなので参照できない
    //std::cout << *l << std::endl; //local()で作ったローカル変数iはローカルなので参照できない
    //dyn_alloc()のローカル変数は動的確保(new)しているので参照できる
    int* d = dyn_alloc();
    std::cout << *d << std::endl;
    delete d;
    //std::cout << *d << std::endl; // deleteで破棄しているので参照できない
}