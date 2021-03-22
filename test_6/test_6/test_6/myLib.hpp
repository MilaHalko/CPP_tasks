#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Numbers {
public:
    int num;
};

string readFile();
int makeArray (string, Numbers*);
void printArray (Numbers*, int);
