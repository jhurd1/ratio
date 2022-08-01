#include "ratio.h"
#include <iostream>
#include <iomanip>

/*********************************
 * DATA MEMBERS
 * ******************************/

Ratio r;

/***********************************
 * A struct for
 * comparison.
 * ********************************/
struct ratioStruct
{
    int k;
    ratioStruct(int const &i): k(i)
    {
     
    }
    bool operator()(int const &i)
    {
     return (i == k);
    }
};


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

bool isEqual(const int &m, const int &n)
{
 if(m != n)
 {
  return false;
 }
 return true;
}

/**********************************
 * OTHER DATA MEMBERS
 * ********************************/
int Ratio::showRatio(std::vector<int> *tester, int k)
{
 int count = 0;
 std::cout << count << " " << tester->size() << std::endl;
 for(auto it = tester->begin(); it != tester->end(); it++)
 {
  if(isEqual(*it, *(it + 1)))
  {
   count++;
  }
 }
 for(auto const &value : *tester)
 {
  std::cout << value << " : vector values " << std::endl;
 }
  unsigned long dat = (tester->size() / count);
  std::cout << count << " count" << std::endl;
  std::cout << dat << std::endl;
  return 0;
}
