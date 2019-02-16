#include "NUCLEOTIDES.h" 
#include <iostream> 
#include <string> 
#include <algorithm> 

using namespace std; 

// collect number of occurences in each line
int Nucleotides::nCount(int sum, string lineString)
{
    a += std::count(lineString.begin(), lineString.end(), 'A');
    t += std::count(lineString.begin(), lineString.end(), 'T');
    c += std::count(lineString.begin(), lineString.end(), 'C');
    g += std::count(lineString.begin(), lineString.end(), 'G');
}
