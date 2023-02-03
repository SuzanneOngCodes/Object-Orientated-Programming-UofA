#include "person.h"
#include "aircraft.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    aircraft first_flight;
    person first_flight_pilot,first_flight_copilot,another_pilot;
    first_flight_pilot.setName("Joe Biden");
    first_flight_copilot.setName("Jacinda Arden");
    first_flight = aircraft("A1340",first_flight_pilot,first_flight_copilot);
    another_pilot.setName("PS4");
    first_flight.setPilot(another_pilot);
    first_flight.getPilot();
    first_flight.setCoPilot(first_flight_pilot);
    first_flight.getCoPilot();
    first_flight.printDetails();
}
