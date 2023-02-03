#ifndef RECORDSTORE_H
#define RECORDSTORE_H
# include <string>
using namespace std;

class RecordStore{
public:
	RecordStore();
	RecordStore(string n, string a, int s);   // creates a record store of name n, address a, and sales s
	void set_address(string a); 
	string get_address();
	void set_name(string n); 
	string get_name();
	void set_sales(int s); 
	int get_sales();
	virtual int get_excessSales() = 0 ;  // return the number of record sales above a given store target
	virtual ~RecordStore();
protected:
	string name;           // the name of a record store
	string address;             // the address of a record store
	int sales;        // number of records that have been sold. Takes only non-negative values
};
#endif