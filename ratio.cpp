#include "ratio.h"
#include <iostream>
#include <iomanip>

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
  int count = 0;
  std::vector<int>::iterator it;
  for(it = tester->begin(); it != tester->end(); it++)
  {
   if((*it == i) && (*it != 0))
   {
    ++count;
   }
  }
    std::cout << "The ratio of matching integers in this vector: " << count << " / " << tester->size() << std::endl;
    std::cout << "In decimal up to six places therefrom: " << std::setprecision(6) <<  count % tester->size() << std::endl;
    return i;
}
