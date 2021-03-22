#include "myLib.hpp"
//a = [1, 6, 9, 18, 27, 36, 51, 68, 82, 101]

int main() {
    string file = readFile();
    
    Numbers* number = new Numbers [10];
    int i = makeArray (file, number);
    printArray (number, i);
    return 0;
}
