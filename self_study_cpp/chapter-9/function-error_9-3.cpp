#include <iostream>

template<typename T>
T fused_multiply_add(T a, T b, T c){
    T r = a * b + c;
    return r;
}

class Integer{
    int value;
    public:
        Integer(int value) : value{value} { }
        friend Integer operator+(Integer lhs, Integer rhs){
            return Integer{lhs + rhs};
        }
    friend Integer operator-(Integer lhs, Integer rhs){
        return Integer{lhs - rhs};
    }

    int get_value() const{
        return value;
    }
};

int main(){
    // 関数テンプレートをInteger型で実体化して呼び出そうとするが，乗算演算子が定義されていないためエラー
    std::cout << fused_multiply_add<Integer>(1, 2, 3).get_value() << std::endl;
}