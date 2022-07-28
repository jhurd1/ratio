#include <vector>
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
     * ******************************/
    private:
        std::vector<int> *tester;
        int *i;
        int *k;
    public:
    // Constructors
        Ratio();
        Ratio(std::vector<int> tester);
        Ratio(std::vector<int> tester,
            int i,
            int k);

    // Accessors
        std::vector<int> gettester() const;
        int getI() const;
        int getK() const;

    // Mutators
        void settester(std::vector<int> tester);
        void setI(int i);
        void setK(int k);

    //Other members
        int showRatio(int &i, std::vector<int> *tester);
};

#endif
