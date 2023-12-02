#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"

int main (){
    CBird* b1, *b2, *b3;
    b1 = new CCrow();
    b2 = new CChiken();
    b3 = new CBird();
    b1->sing();
    b1->fly();
    b2->sing();
    b2->fly();
    return 0;
}