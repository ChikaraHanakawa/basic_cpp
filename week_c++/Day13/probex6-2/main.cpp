#include <iostream>
#include "airplane.h"
#include "fighteraircraft.h"
#include "passengerplane.h"

int main(){
    AirPlane* fighter, *airlinear;
    fighter = new FighterAircraft();
    airlinear = new PassengerPlane();
    
    fighter->fly();
    fighter->fight();
    airlinear->fly();
    airlinear->carryPassenger();
    delete fighter;
    delete airlinear;
}