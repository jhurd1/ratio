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
        int *i;
    public:
    // Constructors
        Ratio();
        Ratio(std::vector<int> tester, int *i);

    // Accessors
        std::vector<int> gettester() const;
        int getInt() const;

    // Mutators
        void settester(std::vector<int> tester);
        void setInt(int *i);

    //Other members
        int validateInt(int *i);
        int showRatio(std::vector<int> *tester);
        std::vector<int> sortVec(std::vector<int> *tester);
};

#endif
