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
  //for(unsigned int i = 1; i < tester->size(); i++)
  for(int i = 0; i < tester->size(); i++)
  {
   std::cout << "\n" << "The value at index: " << i << "\n";
   if(tester[i].size() == tester[i - 1].size())
   {
    count++;
   } else if(tester[i - 1].size() == tester[i + 1].size())
   {
    count++;
   }
  }
  std::cout << "\n" << "The vector size: " << tester->size() << "\n" << "The number of matches counted: " << count;
  std::cout << "\n" << "The unsigned int loop calculation constitutes " << std::fixed << std::setprecision(6) << count / tester->size() << "\n" << std::endl;
  return 0;
 }
