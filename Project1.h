#ifndef PROJECT1H
#define PROJECT1H
#include <string>

class Project1 {
   private:
      int lines;        // # of lines
      int words;        // # of words
      int chr;          // # of characters
      std::string txtFile;   // text file string
   
   public:
      int ReadFile();
      void PrintInfo() const;


};

#endif