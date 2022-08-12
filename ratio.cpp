#include "ratio.h"
#include <iostream>
#include <iomanip>

/*********************************
 * DATA MEMBERS
 * ******************************/

Ratio r;

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

/**********************************
 * Mutators
 * ********************************/
 void Ratio::settester(std::vector<int> tester)
{
    r.tester = &tester;
}

/**********************************
 * Accessors
 * ********************************/
std::vector<int> Ratio::gettester() const
{
    return *tester;
}

/**********************************
 * OTHER DATA MEMBERS
 * ********************************/

/**********************************
 * showRatio()
 * Compute the ratio of matches
 * within the vector and output
 * the computation to console
 * in the decimal format to the
 * millionths place.
 * ********************************/
int Ratio::showRatio(std::vector<int> *tester)
{
  float count = 0;
  auto it = tester->begin(); 
  auto end = tester->end(); 
  while(std::distance(it, end) > 1) 
  {
   if(it == end)
   {
    count++;
   }
  }
  std::cout << std::fixed << std::setprecision(6) << count / tester->size();
  return 0;
 }
