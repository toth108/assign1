#include "FILEREADER.h"
#include <iostream> 
#include <fstream> 

using namespace std; 


// reads file from command line and assigns it to variable "fileName"
FileReader::FileReader()
{
    cout<<"Please enter a .txt file name in the current working directory: "<<endl; 
    string fileName;
    cin>>fileName; 
    openFile(fileName);
}

// reads file from a pre-defined file path 
FileReader::FileReader(string filePath) 
{
    openFile(filePath);
}

// opens file from a pre-defined file path 
// and checks if that file exists, if not it prompts user for a new file 
void FileReader::openFile(string filePath) 
{
    inFile.open(filePath); 
    while (!inFile.is_open())
    {
        cout<<"File cannot be found, name a new file."<<endl; 
        string newPath; 
        cin>>newPath; 
        inFile.open(newPath);
    }
}

// reads in file line by line, returning each line as a string until the end of the file 
string FileReader::readFile()
{
    if (!inFile.eof())
    {
        string line; 
        inFile>>line; 
        return line; 
    }
    else 
    {
        return "EOF";
    }
}

// closes an open file, and reports if there is no file open 
void FileReader::closeFile() 
{
    if (inFile.is_open())
    {
        inFile.close(); 
    }
    else 
    {
        cout<<"There is no open file."<<endl; 
    }
}

// checks if a file has reached its end 
bool FileReader::isEof()
{
    return inFile.eof(); 
}
