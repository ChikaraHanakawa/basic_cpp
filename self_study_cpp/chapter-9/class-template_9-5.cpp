#include <iostream>

template <typename T>
class vector2d{
    public:
        T x;
        T y;
};

void show(int v){
    std::cout << "int: " << v << std::endl;
}

void show(float v){
    std::cout << "float: " <<  v << std::endl;
}

int main(){
    vector2d<int> i2d{
        10, 20
    };
    vector2d<float> f2d{
        10.0f, 20.0f
    };

    i2d.y = 30;

    show(i2d.x);
    show(f2d.x);
    return 0;
}