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
Ratio::Ratio(std::vector<int> tester, std::set<int> s)
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

void Ratio::setset(std::set<int> s)
{
 r.s = s;
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
 * isEqual()
 * A flag for controlling
 * some other function's procedure.
 * ********************************/
bool isEqual(const int &m, const int &n)
{
 if(m != n)
 {
  return false;
 }
 return true;
}

/**********************************
 * storeCompare()
 * Store the values held in the
 * vector within the set for the
 * upcoming comparison.
 * ********************************/
std::set<int> Ratio::storeCompare(std::vector<int> *tester)
{
 std::set<int> s;
 for(auto it = tester->begin(); it != tester->end(); it++)
 {
 if(it == tester->begin() || it == tester->end())
  {
   tester->erase(it);
  } else
   {
    s.insert(*it);
   }
 }
 return s;
}

/**********************************
 * showRatio()
 * Compute the ratio of matches
 * within the vector and output
 * the computation to console
 * in the decimal format to the
 * millionths place.
 * ********************************/
int Ratio::showRatio(std::vector<int> *tester, std::set<int> s)
{
 double count = 0.0;
 storeCompare(tester);
 for(auto it = tester->begin(); it != tester->end(); it++)
 {
  for(int whatevz : s)
  {
   if(whatevz == *it)
   {
    count++;
   }
  }
  //stackoverflow.com/questions/37900432/ddg#37900496
 }

  unsigned long dat = (count / tester->size()); // Computation for the ratio.
  std::cout << "Number of matches: " << count << std::endl; // Console-out the number of matches.
  std::cout << dat << "\n" << std::endl; // Console-out the computation.
  return 0;
}
