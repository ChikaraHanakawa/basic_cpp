#include <iostream>

class counter{
    private:
        static int count;
    public:
        counter();
        ~counter();
        static void view_count();
};

int counter::count = 0;

counter::counter(){
    ++count;
}
counter::~counter(){
    --count;
}
void counter::view_count(){
    std::cout << count << std::endl;
}
int main(){
    counter time;
    time.view_count();
    return 0;
}