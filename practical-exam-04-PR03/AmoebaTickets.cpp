#include <string>
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "RecordStore.h"

using namespace std;

AmoebaTickets::AmoebaTickets():Amoeba(""){}

AmoebaTickets::AmoebaTickets(string n):Amoeba(""){
	ticketsSold = 0 ;
}

void AmoebaTickets::sellTicket(){
	ticketsSold++;
}

int AmoebaTickets::get_ticketsSold(){
	return ticketsSold;
}

AmoebaTickets::~AmoebaTickets(){}