#ifndef SORT_BY_ANIMALID_H
#define SORT_BY_ANIMALID_H
#include "animal.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

class sort_by_animalID{
	public:
		static void sort(animal **animals,int n);	// sorts the array of n animals into ascending order using their animalIDs
};
#endif