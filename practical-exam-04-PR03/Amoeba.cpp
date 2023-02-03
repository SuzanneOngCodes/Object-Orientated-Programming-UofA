#include <string>
#include "RecordStore.h"
#include "Amoeba.h"

using namespace std;

int Amoeba::amoebaBranch = 0; 

Amoeba::Amoeba(string a):RecordStore("Amoeba", a, 0){
	amoebaBranch++;
	storeID += amoebaBranch - 1;
}

void Amoeba::set_storeID(int i){
	storeID = i;
}

int Amoeba::get_storeID(){
	return storeID;
}

void Amoeba::set_amoebaBranch(int j){
	amoebaBranch = j ; 
} 

int Amoeba::get_amoebaBranch(){
	return amoebaBranch;
}

int Amoeba::get_excessSales(){
	if (sales > 1000){
		return sales;
	}else{
		return 0;
	}
}

Amoeba::~Amoeba(){}