#include <string>
#include "RecordStore.h"
using namespace std;


RecordStore::RecordStore(){

}

RecordStore::RecordStore(string n, string a, int s){
	name = n ;
	address = a ; 
	sales =s ;
}

void RecordStore::set_address(string a){
	address = a ; 
}

string RecordStore::get_address(){
	return address;
}

void RecordStore::set_name(string n){
	name=n;
}

string RecordStore::get_name(){
	return name;
}

void RecordStore::set_sales(int s){
	sales = s;
}

int RecordStore::get_sales(){
	return sales;
}

RecordStore::~RecordStore(){
}