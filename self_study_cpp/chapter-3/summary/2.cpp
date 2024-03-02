#include <iostream>

class vector3d{
    float x = 0;
    float y = 0;
    float z = 0;
    public:
        vector3d();
        vector3d(float x, float y);
        vector3d(float x, float y, float z);
        void vector_show();
};

vector3d::vector3d(){
}

vector3d::vector3d(float x, float y) : x(x), y(y){
}

vector3d::vector3d(float x, float y, float z) : x(x), y(y), z(z){
}

void vector3d::vector_show(){
    std::cout << x << " " << y << " " << z << std::endl;
}

int main(){
    vector3d a;
    a.vector_show();
    vector3d b(1, 2);
    b.vector_show();
    vector3d c(1, 2, 3);
    c.vector_show();
    return 0;
}