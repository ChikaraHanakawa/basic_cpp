#include <iostream>
#include "fighteraircraft.h"
#include "passengerplane.h"

int main(){
    FighterAircraft* fighter = new FighterAircraft();
    PassengerPlane* passenger = new PassengerPlane();
    fighter->fly();
    fighter->fight();
    airlinear->fly();
    airlinear->carryPassengers();
    delete fighter;
    delete airlinear;
}