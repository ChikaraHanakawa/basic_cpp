#include <iostream>

namespace message{
    namespace sentence{
        namespace character{
            void hello(){
                std::cout << "hello, world!" << std::endl;
            }
        }
    }   
}

namespace mail = message::sentence::character;
int main(){
    mail::hello();
}