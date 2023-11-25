#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

#include <iostream>
#include <string>
#include "airplane.h"

class FighterAircraft : public Airplane{
    private:
        std::string m_type;
    public:
        FighterAircraft();
        std::string getType();
        void fly();
        void action();
};

#endif // _FIGHTERAIRCRAFT_H_