#include "person.h"
#include <string>

using namespace std;

int main(){
    person display;
    display=person("Suz", 46);
    display.setName("Changi");
    display.setSalary(66);
    display.getName();
    display.getSalary();
    return 0;
}
