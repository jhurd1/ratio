#include "ratio.h"
#include <iostream>
#include <vector>

/*************************************
 * Driver function for Ratio.
 * ***********************************/
int main(int argc, char *argv[])
{
    Ratio r;
    //int *i = nullptr;
    int i = 0;
    std::vector<int> *tester = new std::vector<int>;
    try
    {
     std::cout << "Provide integers for the vector" << std::endl;
     while(std::cin >> i) //bad access here
     {
      tester->push_back(i);
     }
     r.showRatio(i, tester);
    } catch(std::exception &e)
    {
     std::cout << "Something went wrong with the user input and function call block." << std::endl;
    }
    delete tester;
    return 0;
}
