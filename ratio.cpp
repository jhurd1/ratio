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
Ratio::Ratio(std::vector<int> tester, std::unordered_map<int, unsigned int> counter)
{
    settester(tester);
    setCounter(counter);
}

/**********************************
 * Mutators
 * ********************************/
 void Ratio::settester(std::vector<int> tester)
{
    r.tester = &tester;
}

void Ratio::setCounter(std::unordered_map<int, unsigned int> counter)
{
 this->counter = counter;
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
 * storeCompare()
 * Store the values held in the
 * vector within the set for the
 * upcoming comparison.
 * ********************************/
std::unordered_map<int, unsigned int> Ratio::storeCompare(std::vector<int> *tester)
{
 int forCounter = 0;
 counter.emplace(forCounter, tester);
 for(const auto &p : counter)
 {
  std::cout << "counter[" << p.first << "] = " << p.second << '\n';
 }
 return counter;
}

/**********************************
 * showRatio()
 * Compute the ratio of matches
 * within the vector and output
 * the computation to console
 * in the decimal format to the
 * millionths place.
 * ********************************/
int Ratio::showRatio(std::vector<int> *tester, std::unordered_map<int, unsigned int> counter)
{
  double count = 0.0;
  storeCompare(tester);
  for(int i = 0; i < counter.size(); ++i)
  {
   
  }
  unsigned long dat = (count / tester->size()); // Computation for the ratio.
  std::cout << "Number of matches: " << count << std::endl; // Console-out the number of matches.
  std::cout << dat << "\n" << std::endl; // Console-out the computation.
  return 0;
 }
