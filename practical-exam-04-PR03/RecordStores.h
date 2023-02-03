# ifndef RECORDSTORES_H
# define RECORDSTORES_H

#include <string>
#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"

using namespace std;

class RecordStores{
public:
	static void sort(Amoeba **store, int n);  // sorts the array of n Amoeba pointers in 
                                              // ascending order base on their storeID
};
#endif