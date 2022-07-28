#include "ratio.h"
#include <iostream>

/*************************************
 * Driver function for Ratio.
 * ***********************************/
int main(int argc, char *argv[])
{
    Ratio r;
    int *i = nullptr;
    std::vector<int> *tester = nullptr;
    std::cout << "Provide integers for the vector" << std::endl;
    while(std::cin >> *i)
    {
     tester->push_back(*i);
    }
    r.showRatio(*i, tester);
    return 0;
}
