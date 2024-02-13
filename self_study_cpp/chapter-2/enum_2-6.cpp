#include <iostream>

enum class Category{
    Value1,//戦闘は明示的に指定しない限り暗黙的に0
    Value2,//値を省略した場合は1つずつ増加する
    Value3 = 100,//値を指定することも可能
    Value4,//再度省略した場合は1つずつ増加する
};

int main(){
    Category cat = Category::Value3;
    std::cout << static_cast<int>(cat) << std::endl;
}