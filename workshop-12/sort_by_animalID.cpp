#include "animal.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "sort_by_animalID.h"
# include <iostream>

using namespace std;

void sort_by_animalID::sort(animal **animals , int n){
	for (int i = 0 ; i < n ; i ++){
		for (int j = i+1 ; j < n ; j++){
			int ani = animals[i]->get_animalID();
			int ani2 = animals[j]->get_animalID();
			if (ani > ani2){
				animal *temp = animals[i];
				animals[i] = animals[j];
				animals[j] = temp;
			}
		}

	}
}


// class AnimalTest : public animal{
// public:
// 	AnimalTest(string name, int value):animal(name, value){}
// 	void get_name() override {return name;}
// };

/*int * func (int *p)
int * a;
return a;
if use int b;
return &b;
// dereferencing using &
(int **)* pp = &(ptr)
= new (int )
[] = dereference */

/* const int (fixed)
static funtions = when implemented in main
int main(){
	No need to imply Maths m; 
	Just put scope operator: 
	int b = Maths::add(1,2);
}
*/

/* //Static functions are available without an instance / object of that class 
static int add(int a , int b){
	return a+b;
}

// Just the same, static members are also available everywhere
static int id;
};

// "static" means the memory location is static. There is only one of them */