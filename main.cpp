// Jacob Borth
// CSCI 208, Project 1

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream indata;
    char ch;
    int lines = 0, words = 0, chr = 0;

    indata.open("Writ101Essay.txt");

    indata.get(ch);
    
    while(indata) {
        if (ch == '\n')
            lines++;
        else if (ch == ' ')
            words++;
        else
            chr++;
    indata.get(ch);
    }

    cout << lines << "\t" << words << "\t" << chr << "\t" << "Writ101Essay.txt" << endl;


    return 0;
}