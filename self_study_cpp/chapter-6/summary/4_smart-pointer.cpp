#include <iostream>
#include <memory>

class Solution{
    int* pointer;
    public:
        Solution() : pointer(new int) {}
        ~Solution() { delete pointer; }

        int* operator->() const { return pointer; }//アロー演算子
        int& operator*() const { return *pointer; }//関節参照演算子
};
