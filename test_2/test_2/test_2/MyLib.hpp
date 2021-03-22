#include <iostream>
#include <stdio.h>

using namespace std;

class Numbers {
public:
    int n_1;
    int n_2;
    
    void set(int n1, int n2) {
        n_1 = n1;
        n_2 = n2;
    }
    void print () {
        cout << "Numbers (" << n_1 << "," << n_2 << ")" << endl;
    }
};
