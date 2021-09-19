#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string FileCheck();
void CountLines(string);
void CountWords(string);
void CountCharacters(string);

ifstream inputFile;
string inputFileName;
int lines = 0;
int words = 0;
int characters = 0;

int main()
{
    string lineBuffer;
    
    FileCheck();
    
    getline(inputFile, lineBuffer, '\0');

    CountLines(lineBuffer);
    CountWords(lineBuffer);
    CountCharacters(lineBuffer);
    
    cout << lines << "\t" << words << "\t" << characters << "\t" << inputFileName;
    
    return 0;
}

string FileCheck()
{
    do
    {
        cout << "Please enter a valid file name: ";
        cin >> inputFileName;
        
        inputFile.open(inputFileName);
        
        if (!inputFile.is_open())
        {
            cout << "Could not open file " << inputFileName << endl;
        }
    }
    while (!inputFile.is_open());

    return (inputFileName);
}

void CountLines(string readLines)
{
    stringstream l(readLines);
    string lineHolder;
    bool lineCheck;
    
    do
    {
        getline(l, lineHolder);
        lines++;
        if (l.eof())
        {
            lineCheck = true;
        }
        
    } while (lineCheck == false);
}

void CountWords(string readWords)
{
    stringstream w(readWords);
    string wordBuffer;

    while (w >> wordBuffer)
    {
        words++;
    }
}

void CountCharacters(string readCharacters)
{
    characters += readCharacters.length();
}