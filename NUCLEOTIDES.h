#ifndef NUCLEOTIDES_H
#define NUCLEOTIDES_H
#include <iostream> 
#include <string>

using namespace std; 

// this class collects and calculates the number of occurences of each nucleotide
class Nucleotides
{
    public: 
    int nCount(int sum, string lineString); //while this technically returns void, it only runs properly when type int without a return
    int a;
    int t;
    int c;
    int g; 
    // int count; 
};


#endif 
