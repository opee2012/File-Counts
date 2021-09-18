#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string FileCheck();
void CountLines();
void CountWords();
void CountCharacters();

ifstream inputFile;
string inputFileName;
ostringstream readBuffer;
int lines = 0;
int words = 0;
int characters = 0;

int main()
{
    FileCheck();
    
    while (!inputFile.eof()) {
        string lineHolder;
    
        getline(inputFile, lineHolder);
        lines++;
        characters += lineHolder.length();
        CountWords();

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

void CountLines()
{
    string lineHolder;
    
    getline(inputFile, lineHolder);
    lines++;
}

void CountWords()
{
    string readWords;
    
    while (inputFile >> readWords)
    {
        words++;
    }
}

void CountCharacters()
{
    
}
