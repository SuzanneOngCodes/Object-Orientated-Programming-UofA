#include "person.h"
#include "aircraft.h"
#include <string>
#include <iostream>


using namespace std;

aircraft::aircraft(){
}

aircraft::aircraft(string callsign,person thePilot,person theCoPilot)
{
    call = callsign;
    Pilot = thePilot;
    CoPilot = theCoPilot;
}

void aircraft::setPilot(person thePilot)
{
    Pilot = thePilot;
}

person aircraft::getPilot()
{
    return Pilot;
}

void aircraft::setCoPilot(person theCoPilot)
{
    CoPilot = theCoPilot;
}

person aircraft::getCoPilot()
{
    return CoPilot;
}

void aircraft::printDetails()
{
    cout<<call<<endl<<Pilot.name<<endl<<CoPilot.name<<endl;
}

aircraft::~aircraft(){
    
}
