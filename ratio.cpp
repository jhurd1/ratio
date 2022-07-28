#include "ratio.h"
#include <iostream>

/*********************************
 * DATA MEMBERS
 * ******************************/

Ratio r;

/***********************************
 * A struct to test
 * swapping of values,
 * if necessary.
 * ********************************/
struct
{
    Ratio r;
    int j;
    int l;
} ratioStruct;


/***********************************
 * Constructors
 * ********************************/

/**********************************
 * Default constructor
 * ********************************/
Ratio::Ratio()
{

}

/**********************************
 * Non-default constructors
 * ********************************/
Ratio::Ratio(std::vector<int> tester)
{
    settester(tester);
}


Ratio::Ratio(std::vector<int> tester,
    int i,
    int k)
{
    settester(tester);
    setI(i);
    setK(k);
}

/**********************************
 * Mutators
 * ********************************/
 void Ratio::settester(std::vector<int> tester)
{
    r.tester = &tester;
}

void Ratio::setI(int i)
{
    r.i = &i;
}

void Ratio::setK(int k)
{
    r.k = &k;
}

/**********************************
 * Accessors
 * ********************************/
std::vector<int> Ratio::gettester() const
{
    return *tester;
}

int Ratio::getI() const
{
    return *i;
}

int Ratio::getK() const
{
    return *k;
}

/**********************************
 * OTHER DATA MEMBERS
 * ********************************/
int Ratio::showRatio(int &i, std::vector<int> *tester)
{
 //evaluate whether each item matches another
  std::cout << "Contents of the vector:" << std::endl;
    for(auto &it : *tester)
    {
     std::vector<int>::iterator iterator = std::find(tester->begin(), tester->end(), it);
     if(*iterator == *it)
     {
      std::cout << "Match" << it;
     }
     std::cout << it << " ";
    }
    return i;
}
