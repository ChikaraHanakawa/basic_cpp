#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

#include <iostream>
#include <string>

class FighterAircraft{
    private:
        std::string m_type;
    public:
        FighterAircraft();
        std::string getType();
        void fly();
        void fight();
};

#endif // _FIGHTERAIRCRAFT_H_