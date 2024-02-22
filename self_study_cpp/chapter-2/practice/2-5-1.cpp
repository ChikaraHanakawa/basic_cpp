#include <iostream>

class veryverylonglongname_nest_classname{
    public:
        void say_name();
};

void veryverylonglongname_nest_classname::say_name(){
    std::cout << "sho" << std::endl;
}
int main(){
    using sho = veryverylonglongname_nest_classname;
    sho a;
    a.say_name();
    return 0;
}
