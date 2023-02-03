#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include "person.h"
#include <string>
#include <iostream>

class aircraft:public person
{
public:
    aircraft();
    // a pilot and copilot must be provided when creating an aircraft
    aircraft(std::string callsign,person thePilot,person theCoPilot);
    void setPilot(person thePilot);      // change the pilot
    person getPilot();
    void setCoPilot(person theCoPilot);  // change the co-pilot
    person getCoPilot();
    void printDetails();                 // print the call sign, a new line, the pilot name,
                                         // a new line, the co-pilot name and a final newline.
    std::string call;
    person Pilot;
    person CoPilot;
    ~aircraft();
};

#endif
    
