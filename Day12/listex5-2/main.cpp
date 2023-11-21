#include <iostream>
#include <string>
#include <set>

int main(){
    std::set<std::string> names;
    names.insert("Tom");
    names.insert("Bob");
    names.insert("Mike");
    names.insert("Mike");
    std::set<std::string>::iterator it;
    for(it = names.begin();it != names.end();it++){
        std::cout << *it << std::endl;
    }
    std::string n[] = {"Bob", "Steve"};
    for(int i = 0;i < 2;i++){
        it = names.find(n[i]);
        if(it != names.end()){
            std::cout << n[i] << " is not in a set." << std::endl;
        }else{
            std::cout << n[i] << " is in a set." << std::endl;
        }
    }
    return 0;
}