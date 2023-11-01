#include <iostream>
#include <string>
#include <vector>
#include <list>

int main(){
    std::vector<std::string> v;
    std::list<std::string> l;
    v.push_back("HELLO");
    v.push_back("WORLD");
    l.push_back("hello");
    l.push_back("world");
    l.push_back("!");
    std::vector<std::string>::iterator i1;
    std::list<std::string>::iterator i2;
    for(i1 = v.begin(); i1 != v.end(); i1++){
        std::cout << *i1 << std::endl;
    }
    i2 = l.begin();
    l.remove(*i2);
    for(i2 = l.begin(); i2 != l.end(); i2++){
        std::cout << *i2 << std::endl;
    }
}