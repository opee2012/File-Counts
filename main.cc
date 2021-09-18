#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string FileCheck();
string CountLines();
void CountWords(string);
void CountCharacters(string);

ifstream inputFile;
string inputFileName;
int lines = 0;
int words = 0;
int characters = 0;

int main()
{
    FileCheck();
    
    while (!inputFile.eof()) 
    {
        string lineBuffer = CountLines();
        CountWords(lineBuffer);
        CountCharacters(lineBuffer);
    }
    
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

string CountLines()
{
    string lineHolder;

    getline(inputFile, lineHolder);
    
    lines++;

    return (lineHolder);
}

void CountWords(string readWords)
{
    stringstream s(readWords);
    string wordBuffer;

    while (s >> wordBuffer)
    {
        words++;
    }
}

void CountCharacters(string readCharacters)
{
    characters += readCharacters.length();
}
