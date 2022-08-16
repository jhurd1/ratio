#include "ratio.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

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
 * SortHelper
 * Help sort sort the vector.
 * ********************************/
bool Ratio::sortHelper(int i, int j)
{
 return(i < j);
}

/**********************************
 * sortVec()
 * Sort the vector
 * to facilitate the
 * ratio calculation of the vector's
 * contents.
 * ********************************/
std::vector<int> Ratio::sortVec(std::vector<int> *tester)
{
 std::sort(tester->begin(), tester->end());
 for(std::vector<int>::const_iterator it = tester->begin(); it != tester->end(); ++it)
 {
 std::cout << *it << ' ';
 }
 return *tester;
}

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
  sortVec(tester);
  for(unsigned int i = 4; i < tester->size(); i++) //Unsigned integers never drop below 0.
  //for(int i = 0; i < tester->size(); i++)
  {
   if(tester->at(1) == tester->at(0))
   {
    count++;
   if (tester->at(2) == tester->at(1))
   {
    count++;
   }
   if (tester->at(3) == tester->at(2))
   {
    count++;
   }
   if (tester->at(4) == tester->at(3))
   {
    count++;
   }
  }
 }
  std::cout << "\n" << "The vector size: " << tester->size() << "\n" << "The number of matches counted: " << count;
  std::cout << "\n" << "The unsigned int loop calculation constitutes " << std::fixed << std::setprecision(6) << count / tester->size() << "\n" << std::endl;
  return 0;
 }
