#ifndef STATISTICS_H
#define STATISTICS_H
#include <iostream> 

using namespace std; 


// this class collects and stores data from the file being read 
class Statistics
{
    public: 
    Statistics();
    int lineLeng(string line);
    int getSum(int lineLeng);
    double getSumSquared(int sum);
    int sum;
    int lineNumSum = 1;
    double sumSquared; 
};

#endif 
