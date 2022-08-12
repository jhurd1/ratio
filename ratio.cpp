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
  float itCount = 0;
  int loopCycles = 0;
  for(unsigned int i = 1; i < tester->size(); i++)
  {
   loopCycles++;
   std::cout << "The index for i is " << i << "\n" << std::endl;
   std::cout << "Loop has cycled: " << loopCycles << " " << " times!" << "\n" << std::endl;
   if(tester[i].size() == tester[i - 1].size())
   {
    count++;
   }
  for(std::vector<int>::const_iterator j = tester->begin(); j != tester->end(); ++j)
  {
   std::cout << "The value at index " << count << " is " << *j << " ";
   if(j == j - 1)
   {
    itCount++;
   }
  }
  }
  
  std::cout << "\n";
  std::cout << "\n" << "The iterator calculation is " << std::fixed << std::setprecision(6) << itCount / tester->size() << std::endl;
  std::cout << "\n" << "The unsigned int loop calculation constitutes " << std::fixed << std::setprecision(6) << count / tester->size() << "\n" << std::endl;
  return 0;
 }
