#include <iostream>

class nestclass{
    public:
        using intger = int;
        intger getter();
        void setter(intger new_value);
    private:
        intger value;
};

nestclass::intger nestclass::getter(){
    return value;
}
void nestclass::setter(intger new_value){
    value = new_value;
}

int main(){
    nestclass a;
    a.setter(10);
    std::cout << a.getter() << std::endl;
}