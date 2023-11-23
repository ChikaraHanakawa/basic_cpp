#include <iostream>
#include "iinf1.h"
#include "iinf2.h"
#include "sample.h"

void foo(IInf1*);
void bar(IInf2*);

int main(){
    CSample * s = new CSample();
    foo((IInf1*)s);
    bar((IInf2*)s);
    return 0;
}

void foo(IInf1* p){
    p->func1();
    p->func2();
    // p->func3();
    // p->func4();
}
void bar(IInf2* p){
    p->func3();
    p->func4();
}