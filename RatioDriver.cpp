#include "ratio.h"
#include <iostream>
#include <vector>

/*************************************
 * Driver function for Ratio.
 * ***********************************/
int main(int argc, char *argv[])
{
    Ratio r;
    int *i = 0;
    bool stopper = false;
    std::vector<int> *tester = new std::vector<int>;
    try
    {
     r.validateInt(i);
     while(!stopper)
     {
      for(int j = 0; j < 5; ++j)
      {
       if(std::cin >> *i)
       {
        tester->push_back(*i);
       } else
       {
        std::cout << "You did me wrong!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        stopper = true;
        break;
       }
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

