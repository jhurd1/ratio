#include <vector>
#include <unordered_map>
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
        
    public:
    // Constructors
        Ratio();
        Ratio(std::vector<int> tester);

    // Accessors
        std::vector<int> gettester() const;

    // Mutators
        void settester(std::vector<int> tester);

    //Other members
        int showRatio(std::vector<int> *tester);
};

#endif
