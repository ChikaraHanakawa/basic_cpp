#include <iostream>
#include "vector2.h"

void vec(std::string, Vector2&);

int main(){
    Vector2 v1, v2, v3;
    v1.x = 1.0;
    v1.y = 2.0;
    v2 = v1;
    v3 = 4.0 * v1;
    vec("v1=", v1);
    vec("v2=", v2);
    Vector2 result = v1 + v2;
    vec("v1 + v2=", result);
    vec("v3=", v3);
    v3 += v1;
    vec("v3=", v3);
    v1 -= v2;
    vec("v1=", v1);
    return 0;
}

void vec(std::string vecname, Vector2& v){
    std::cout << vecname << "(" << v.x << "," << v.y << ")" << std::endl;
}