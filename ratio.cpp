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
Ratio::Ratio(std::vector<int> tester, int i)
{
    settester(tester);
    setInt(i);
}

/**********************************
 * Mutators
 * ********************************/
 void Ratio::settester(std::vector<int> tester)
{
    r.tester = &tester;
}

void Ratio::setInt(int i)
{
 r.i = &i;
}

/**********************************
 * Accessors
 * ********************************/
std::vector<int> Ratio::gettester() const
{
    return *tester;
}

int Ratio::getInt() const
{
 return *i;
}

/**********************************
 * OTHER DATA MEMBERS
 * ********************************/
/**********************************
 * ValidateInt
 * validates the user input.
 * ********************************/
int Ratio::validateInt(int *i)
{
 bool valid = false;
 std::vector<int> *tester = new std::vector<int>;
 std::cout << "Provide five integers for the vector" << std::endl;
 try {
  for(int j = 0; j < 5; ++j)
 {
  if(std::cin >> *i)
  {
   valid = true;
   tester->push_back(*i);
  } else
  {
   std::cin.clear();
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
 }
 } catch (std::exception &e)
 {
  std::cout << "Error";
 }
 r.showRatio(tester);
 delete tester;
 return *i;
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
  for(unsigned int i = 4; i < tester->size(); i++)
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
   if (tester->at(0) == tester->at(4))
   {
    count++;
   }
  }
 }
  std::cout << "\n" << "The vector size: " << tester->size() << "\n" << "The number of matches counted: " << count;
  std::cout << "\n" << "The unsigned int loop calculation constitutes " << std::fixed << std::setprecision(6) << count / tester->size() << "\n" << std::endl;
  return 0;
 }
