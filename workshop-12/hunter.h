#ifndef HUNTER_H
#define HUNTER_H

#include "animal.h"
#include <string>
using namespace std;

class hunter:public animal{
public:
    hunter(string n, int v);  // create a hunter with name n and body volume v
    void set_kills(int pkills);
    int get_kills();
    string get_name() override;
    ~hunter();
private:
    int kills ;               // how many kills have been recorded, initialised to 0
    static int nextID ;
};

#endif
