#include <iostream>
#include "airplane.h"
#include "fighteraircraft.h"
 #include "passengerplane.h"

int main(){
    Airplane* fighter, *airlinear;
    fighter = new FighterAircraft();
    airlinear = new PassengerPlane();
    
    fighter->fly();
    fighter->action();
    airlinear->fly();
    airlinear->action();
    delete fighter;
    delete airlinear;
}