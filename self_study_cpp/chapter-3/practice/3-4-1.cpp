#include <iostream>

class vector3d{
    float x;
    float y;
    float z;

    public:
        vector3d(float x = 0, float y = 0, float z = 0);
        float get_x() const;
        float get_y() const;
        float get_z() const;
};

vector3d::vector3d(float x, float y, float z) : x(x), y(y), z(z){
    this->x = x;
    this->y = y;
    this->z = z;
}

float vector3d::get_x() const{
    return x;
}
float vector3d::get_y() const{
    return y;
}
float vector3d::get_z() const{
    return z;
}

int main(){
    vector3d w;
    vector3d v(1, 2, 3);
    std::cout << w.get_x() << " " << w.get_y() << " " << w.get_z() << std::endl;
    std::cout << v.get_x() << " " << v.get_y() << " " << v.get_z() << std::endl;
}