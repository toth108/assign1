#ifndef FILEREADER_H
#define FILEREADER_H
#include <fstream>


using namespace std; 

// this class provides functions to read, open, and close a file 
// as well as checking if the file has reached its end 
class FileReader
{
    public: 
    FileReader();
    FileReader(string filePath);
    void openFile(string filePath);
    string readFile();
    void closeFile(); 
    bool isEof(); 
    private:
    ifstream inFile;
};



#endif 