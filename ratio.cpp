#include "ratio.h"
#include <iostream>

/*********************************
 * DATA MEMBERS
 * ******************************/

Ratio r;

/***********************************
 * A struct to test
 * swapping of values,
 * if necessary.
 * ********************************/
struct
{
    Ratio r;
    int j;
    int l;
} ratioStruct;


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

Ratio::Ratio(std::vector<int> tester,
    int i,
    int k)
{
    settester(tester);
    setI(i);
    setK(k);
}

/**********************************
 * Mutators
 * ********************************/
 void Ratio::settester(std::vector<int> tester)
{
    r.tester = &tester;
}

void Ratio::setI(int i)
{
    r.i = &i;
}

void Ratio::setK(int k)
{
    r.k = &k;
}

/**********************************
 * Accessors
 * ********************************/
std::vector<int> Ratio::gettester()
{
    return *tester;
}

int Ratio::getI()
{
    return *i;
}

int Ratio::getK()
{
    return *k;
}

/**********************************
 * OTHER DATA MEMBERS
 * ********************************/
int Ratio::showRatio(int &i, std::vector<int> *tester)
{
 //evaluate whether each item matches another
    for(auto &it : *tester)
    {
        if(it == 0)
        {
            std::cout << "0" << std::endl;
        }
        if(it == it + 1)
        {
            ++k; // count the match
        }
        ++ratioStruct.j; // count size of vector
    }
    std::cout << "Vector size: " << ratioStruct.j;
    return i;
}
