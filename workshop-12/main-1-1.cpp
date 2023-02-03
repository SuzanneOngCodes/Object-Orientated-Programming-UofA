#include "animal.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "sort_by_name.h"

#include <iostream>

using namespace std;

 int main(){
 	animal ** ani = new animal*[5];
 	ani[1] = new vegie("Clarence", 1221);
 	ani[0] = new hunter("Tigger", 1221);
 	ani[2] = new vegie("Frr", 1221);
 	ani[4] = new hunter("Eatter", 1221);
 	ani[3] = new hunter("Ti", 1221);
 	sort_by_name::sort(ani,5);
 	for (int i = 0 ; i < 5 ; i++){
 		string nam = ani[i]->get_name();
 		cout<<nam<<endl;
 	}
 }