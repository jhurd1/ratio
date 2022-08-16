#include "ratio.h"
#include <iostream>
#include <vector>

/*************************************
 * Driver function for Ratio.
 * ***********************************/
int main(int argc, char *argv[])
{
    Ratio r;
    int i = 0;
    bool stopper = false;
    std::vector<int> *tester = new std::vector<int>;
    try
    {
     std::cout << "Provide five integers for the vector" << std::endl;
     while(!stopper)
     {
      for(int j = 0; j < 5; ++j)
      {
       std::cin >> i;
       tester->push_back(i);
      }
      stopper = true;
     }
      r.showRatio(tester);
    } catch(std::exception &e)
    {
     std::cout << "Something went wrong with the user input and function call block." << std::endl;
    }
    delete tester;
    return 0;
}

