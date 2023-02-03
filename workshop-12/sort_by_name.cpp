#include "sort_by_name.h"
#include "animal.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

void sort_by_name::sort(animal **animals,int n){
	for (int i = 0 ; i < n ; i++){
		for (int j = i ; j < n ; j++){
			string name1 = animals[i]->get_name();
			string name2 = animals[j]->get_name();
			if (name1 > name2){
				animal *temp = animals[i];
				animals[i] = animals[j];
				animals[j] = temp;
			}
		}
	}

}


