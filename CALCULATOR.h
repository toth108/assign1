#ifndef CALCULATOR_H
#define CALCULATOR_H

using namespace std; 

// this class calculates the mean, variance, and standard deviation 
class Calculator 
{
    public: 
    double mean(double sum, double lineNumSum);
    double var(double sumSquared, double lineNumSum, double mean); 
    double stdDev(double var); 
};



#endif 
