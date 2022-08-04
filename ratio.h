#include <vector>
#include <set>
#ifndef RATIO_H
#define RATIO_H
/************************************
 * RATIO
 * A class to test divulging a ratio
 * of integers and to output them
 * in decimal format up to six
 * number places.
 * **********************************/
class Ratio
{
    /*********************************
     * DATA MEMBERS
     * Part of my purpose in this exer-
     * cise entails reviewing pointers
     * in addition to the hackerrank
     * challenge.
     * ******************************/
    private:
        std::vector<int> *tester;
        std::set<int> s;
    public:
    // Constructors
        Ratio();
        Ratio(std::vector<int> tester, std::set<int> s);

    // Accessors
        std::vector<int> gettester() const;
        //int getK() const;

    // Mutators
        void settester(std::vector<int> tester);
        void setset(std::set<int> s);

    //Other members
        std::set<int> storeCompare(std::vector<int> *tester);
        int showRatio(std::vector<int> *tester, std::set<int> s);
};

#endif
