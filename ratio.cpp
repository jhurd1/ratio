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
Ratio::Ratio(std::vector<int> tester, std::unordered_map<int, unsigned int> counter)
{
    settester(tester);
    setCounter(counter);
}

/**********************************
 * Copy Constructor
 * ********************************/
Ratio::Ratio(const Ratio &r1)
{
 for(const auto &item: r1.counter)
 {
  counter[*item.first] = new Ratio(*item.second);
 }
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
