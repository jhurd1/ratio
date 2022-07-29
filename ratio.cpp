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
  int count = 0;
    for(auto &it : *tester)
    {
     if(tester[i - 1] == tester[i]) // n - 1 represents the last integer, or more plausibly, the last one read by the iterator
     {
      count++;
     }
     if(it == it + 1)
     {
      count++;
      std::cout << "Found a match! It is: " << it << std::endl;
     }
     if(it == 0)
     {
      std::cout << it << std::endl;
     }
     ratioStruct.j++;
    }
     std::cout << "The ratio of matching integers in this vector: " << count << " / " << ratioStruct.j << std::endl;
    return i;
}
