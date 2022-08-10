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
  float count = 0;
  auto it = tester->begin(); // The compiler interprets "auto" as an initialization of a variable and compels it to find its type.
  auto end = tester->end(); // In this case, the compiler presumably finds the index item values and extrapolates the data type therefrom.
  while(std::distance(it, end) > 1) // While we're greater than one item from the end (to keep from overrunning assigned memory).
  {
   if(it == end)
   {
    count++;
   }
  }
  std::cout << std::fixed << std::setprecision(6) << count / tester->size();
  return 0;
 }
