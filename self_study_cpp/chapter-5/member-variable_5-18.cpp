#include <iostream>
#include <string>

class Object{
    std::string name;
    public:
        Object(std::string name);
        const std::string& get_name() const;
};

Object::Object(std::string name) : name(name){}

const std::string& Object::get_name() const{
    return name;
}

int main(){
    Object obj("Hello, World!");
    std::cout << obj.get_name() << std::endl;
    return 0;
}