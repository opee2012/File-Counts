// Jacob Borth
// CSCI 208, Project 1

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file;
    char fileContents;
    int lines = 0, words = 0, chr = 0;
    string txtFile;

    txtFile = "Writ101Essay.txt"; //temporary placeholder

    file.open(txtFile);
    file.get(fileContents);
    
    while(file) {
        if (fileContents == '\n')
            lines++;
        else if (fileContents == ' ')
            words++;
        else
            chr++;
    file.get(fileContents);
    }

    cout << lines << "\t" << words << "\t" << chr << "\t" << txtFile << endl;


    return 0;
}