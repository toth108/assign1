#include "CALCULATOR.h"
#include <iostream> 
#include <cmath>

using namespace std; 

// calculates mean of data 
double Calculator::mean(double sum, double lineNumSum)
{
    return sum/lineNumSum; 
}

// calculates variance of data 
double Calculator::var(double sumSquared, double lineNumSum, double mean)
{
    return((sumSquared/lineNumSum)-(mean*mean));
}

// calculates standard deviation of data 
double Calculator::stdDev(double var)
{
    return sqrt(var); 
}
