#include <iostream> 
#include <fstream> 
#include <string> 
#include <algorithm> 
#include <random> 
#include <math.h> 
#include "FILEREADER.h" 
#include "CALCULATOR.h" 
#include "STATISTICS.h" 
#include "NUCLEOTIDES.h" 

using namespace std;

int main (int argc, char** argv) 
{
    int continueQuit = 1;
    do
    {

    // create instances of each class 
    FileReader fr; 
    Statistics s;
    Calculator calc; 
    Nucleotides n; 

    int tempSum;
    int tempLineNumSum; 
    double tempSumSquared;


    while(!fr.isEof())
    {
        string tempLine = fr.readFile();
        
        tempSum = s.lineLeng(tempLine);
        tempLineNumSum = s.lineNumSum++;
        tempSumSquared = s.getSumSquared(s.sum);

        n.nCount(tempSum, tempLine);
    }  

    double tempMean = calc.mean(s.sum, tempLineNumSum);
    double tempVar = calc.var(tempSumSquared, tempLineNumSum, tempMean);
    double tempStdVar = calc.stdDev(tempVar);


    double probA = n.a/tempSum; 
    double probT = n.t/tempSum; 
    double probC = n.c/tempSum; 
    double probG = n.g/tempSum; 


    // output file 
    ofstream outFile; 
    outFile.open("maddytoth.txt", ios::app);
        
    outFile << "Name: Maddy Toth"<< endl;  
    outFile << "ID: 2280492"<< endl;
    outFile << "Date: 15 February 2019"<< endl;
    outFile << "\n"<< endl;
        
    outFile << "A count: " << (n.a)<< endl;  
    outFile << "T count: " << (n.t)<< endl; 
    outFile << "C count: " << (n.c)<< endl; 
    outFile << "G count: " << (n.g)<< endl; 
    outFile << "\n"<< endl;

    outFile << "Sum: " << (s.sum)<< endl;   
    outFile << "Mean: " << (tempMean)<< endl; 
    outFile << "Variance: " << (tempVar)<< endl;  
    outFile << "Standard deviation: " << (tempStdVar)<< endl;  
    outFile << "Sum squared: " << (tempSumSquared)<< endl;  
    outFile << "\n"<< endl;

    outFile << "Probability of A: " << (probA)<< endl; 
    outFile << "Probability of T: " << (probT)<< endl; 
    outFile << "Probability of C: " << (probC)<< endl; 
    outFile << "Probability of G: " << (probG)<< endl;
    outFile << "\n"<< endl;
    

    // Gaussian distribution
    double pi = 3.14159265358979323846;

    int aRand = rand();
    int bRand = rand();
    double ln = log(aRand);

    double C = sqrt(-2*ln) * cos(2*pi*bRand);
    double D = (tempMean*C) + tempStdVar;    


    // ask if user would like to run another file or exit the program
    cout << "Would you like to run another file?"<< endl; 
    cout << "Enter 0 to continue, or 1 to quit. " << endl;
    cin >> continueQuit;
    } while (continueQuit != 1);

}
