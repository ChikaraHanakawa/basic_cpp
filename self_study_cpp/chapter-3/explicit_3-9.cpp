#include <iostream>

class A{
    int m_v;
    public:
        explicit A(int v);
        int v() const;
};

A::A(int v) : m_v(v){}
int A::v() const{
    return m_v;
}

int main(){
    //A x = 0;
        //=> error: conversion from ‘int’ to non-scalar type ‘A’ requested
    A y(42);//ok
    y.v() == 42;//true
}