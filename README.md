# CSCI 208, Project 1, Fall 2021

Write a program that queries the user for file name, then reads that file name and performs the following operations:
* Count the total number of *lines* in the file
* Count the total number of *words* in the file
* Count the total number of *characters* in the file

The program should output these numbers (in that order) on a single line, as well as the file name, separated by tabs.  

## How and What to Submit
Submission will happen via this GitHub respository.  So you'll need to make sure you *add* all necessary files , and you will also need to make sure your code is committed and pushed to GitHub *before* the submission due date.  There's no need to do anything in BlackBoard other than accept the initial invitation link.

Here are the files that should be present in your repository:
* Any necessary C++ source files
* A *Makefile* that builds your program
* At least two different example input files
* Any special instructions for running your program (if needed).

## Example
For example, suppose I were to run your program and enter a file name *gettysburg.txt*, which had the following contents:
```
Four score and seven years ago our fathers brought forth on this continent, a new nation, conceived in Liberty, and dedicated to the proposition that all men are created equal.

Now we are engaged in a great civil war, testing whether that nation, or any nation so conceived and so dedicated, can long endure. We are met on a great battle-field of that war. We have come to dedicate a portion of that field, as a final resting place for those who here gave their lives that that nation might live. It is altogether fitting and proper that we should do this.

But, in a larger sense, we can not dedicate -- we can not consecrate -- we can not hallow -- this ground. The brave men, living and dead, who struggled here, have consecrated it, far above our poor power to add or detract. The world will little note, nor long remember what we say here, but it can never forget what they did here. It is for us the living, rather, to be dedicated here to the unfinished work which they who fought here have thus far so nobly advanced. It is rather for us to be here dedicated to the great task remaining before us -- that from these honored dead we take increased devotion to that cause for which they gave the last full measure of devotion -- that we here highly resolve that these dead shall not have died in vain -- that this nation, under God, shall have a new birth of freedom -- and that government of the people, by the people, for the people, shall not perish from the earth.
```

Then the result would be:
```
5     278    1476 gettysburg.txt
```

## Hint For Testing
The unix command *wc* performs exactly these operations.  So you can test to see if your program is working correctly on Hopper using the *wc* command.
