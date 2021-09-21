// Write a program that queries the user for file name, then reads that file name and performs the following operations:
//
//    - Count the total number of lines in the file
//    - Count the total number of words in the file
//    - Count the total number of characters in the file
//
// The program should output these numbers (in that order) on a single line, as well as the file name, separated by tabs.
//
// Jacob Borth
// 20-Sep-21
// CSCI-208

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// Function Prototypes
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
    
    FileCheck();                            // String function for input file handling
    
    getline(inputFile, lineBuffer, '\0');   // using getline to convert input file into a string

    CountLines(lineBuffer);                 // Void function to count the total number of lines in the input file.
    CountWords(lineBuffer);                 // Void function to count the total number of words in the input file.
    CountCharacters(lineBuffer);            // Void function to count the total number of characters in the input file.
    
    // program output
    cout << lines << "\t" << words << "\t" << characters << "\t" << inputFileName;
    
    return 0;
}

// String function for input file handling
string FileCheck()
{
    do
    {
        // Get the input file name from the user
        cout << "Please enter a valid file name: ";
        cin >> inputFileName;
        
        // Open the input file and check if it opens. If it does not open, ask again.
        inputFile.open(inputFileName);
        if (!inputFile.is_open())
        {
            cout << "Could not open file " << inputFileName << endl;
        }
    }
    while (!inputFile.is_open());

    return (inputFileName);
}

// Void function to count the total number of lines in the input file.
void CountLines(string readLines)
{
    stringstream l(readLines);  // stringstring 'l' created with the string passed into function
    string lineHolder;          // more or less a buffer for strings created to represent lines of the input file
    bool lineCheck;             // boolean for checking when do-while reaches end of stringstream
    
    do
    {
        getline(l, lineHolder);
        lines++;
        if (l.eof())
        {
            lineCheck = true;   // when end of stringstream is not yet reached
        }
        
    } while (lineCheck == false);
}

// Void function to count the total number of words in the input file.
void CountWords(string readWords)
{
    stringstream w(readWords);  // stringstring 'w' created with the string passed into function
    string wordBuffer;          // more or less a buffer for strings created to represent words of the input file

    // while loop inserts all characters from stringstream 'w' into a string stopping at an empty character
    // as well as ignoring empty characters.
    while (w >> wordBuffer)
    {
        words++;
    }
}

// Void function to count the total number of characters in the input file.
void CountCharacters(string readCharacters)
{
    characters += readCharacters.length();  // reading the length of each string passed into function
}
