#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string FileCheck();
int CountLines();
int CountWords();
int CountCharacters();

ifstream inputFile;
string inputFileName;
int lines = 0;
int words = 0;
int characters = 0;

int main()
{
    FileCheck();
    CountLines();
    
    cout << lines << "\t" << words << "\t" << inputFileName;
    
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

int CountLines()
{
    string lineHolder;

    while (!inputFile.eof())
    {
        getline(inputFile, lineHolder);
        lines++;
    }
    
    return 0;
}

int CountWords()
{
    string wordHolder;
    ostringstream readBuffer;

    while (!inputFile.eof())
    {
        inputFile >> wordHolder;
        readBuffer << wordHolder << endl;
        cout << wordHolder << endl;
        ++words;
    }

    return 0;
}

int CountCharacters()
{


    return 0;
}
