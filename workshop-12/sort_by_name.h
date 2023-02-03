# ifndef SORT_BY_THE_NAME_CPP
# define SORT_BY_THE_NAME_CPP
#include "animal.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

class sort_by_name{
public:
	static void sort(animal **animals,int n); // sorts the array of n animals into ascending order using their names
};
#endif