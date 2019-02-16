#include "STATISTICS.h"
#include <iostream> 
#include <fstream> 

using namespace std; 


Statistics::Statistics(){}

// collects the length of each line of the file 
int Statistics::lineLeng(string line)
{
    return line.size();
}

// calculates the sum of the characters in the file 
int Statistics::getSum(int lineLeng)
{
    return sum+=lineLeng;
}

// calculates the sum squared 
double Statistics::getSumSquared(int sum)
{
    return sumSquared = (sum)*(sum);
}