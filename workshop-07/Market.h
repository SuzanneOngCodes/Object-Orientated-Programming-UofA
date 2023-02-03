#ifndef MARKET_H
#define MARKET_H

class Market
{
public:
 
    Market() ;                      // no name or age is required to create a market
    void setName(std::string marName);   // change the market's name
    std::string getName();
    void setAge(int merAge);        // change the market's age
    int getAge();
    std::string name; 
    int age; 
    ~Market();

};

#endif