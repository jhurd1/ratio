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
        std::unordered_map<int, unsigned int> *counter;
    public:
    // Constructors
        Ratio();
        Ratio(std::vector<int> tester, std::unordered_map<const int, unsigned int> counter);
        Ratio(const Ratio &r1); // Copy constructor.
        Ratio &operator = (const Ratio &x); // Copy assignment.

    // Accessors
        std::vector<int> gettester() const;
        std::unordered_map<int, unsigned int> getcounter() const;

    // Mutators
        void settester(std::vector<int> tester);
        void setCounter(std::unordered_map<const int, unsigned int> counter);

    //Other members
        std::unordered_map<int, unsigned int> storeCompare(std::vector<int> *tester);
        int showRatio(std::vector<int> *tester, std::unordered_map<int, unsigned int> counter);
};

#endif
