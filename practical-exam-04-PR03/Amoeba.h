#ifndef AMOEBA_H
#define AMOEBA_H

#include "RecordStore.h"
#include <string>
using namespace std;

class Amoeba:public RecordStore{
public:
	Amoeba(string a);        // creates address with a
                             // calls the parent class constructor with name=="Amoeba",address==a, 
                             // and sales=0;
	void set_storeID(int i); 
	int get_storeID();
	void set_amoebaBranch(int j); 
	int get_amoebaBranch();
	int get_excessSales() override;
	~Amoeba();
private:
	static int amoebaBranch;
	int storeID;                 // unique id for the store
};
#endif