#include <iostream>
#include <utility>

class home{
    int* m_land;
    public:
        explicit home(std::size_t size) : m_land{new int[size]}{}
        ~home() {delete []m_land;}
        home(home&& other);
        int* land() const {return m_land;}
};

home::home(home&& other) : m_land{other.m_land}{//まずムーブ元のポインターをコピー
//ムーブ元のポインターを空にする
//これでこのポインターを持っているのはこのオブジェクトだけになる
    other.m_land = nullptr;
}

int main(){
    home A{100};
    std::cout << "Aの土地のアドレス:" << A.land() << std::endl;
    home B{std::move(A)};
    std::cout << "Bの土地のアドレス:" << B.land() << std::endl;
    std::cout << "移動後のAの土地のアドレス:" << A.land() << std::endl;
}
