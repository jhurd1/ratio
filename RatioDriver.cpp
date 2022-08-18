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
     try
     {
      while(!stopper)
      {
       r.validateInt(i);
       stopper = true;
      }
     } catch(std::exception &e)
    {
     std::cout << "Something went wrong with the user input and function call block." << std::endl;
    }
    return 0;
}

