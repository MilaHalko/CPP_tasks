#include <stdio.h>
#include <iostream>

using namespace std;


class Numbers {
    double m_a, m_b, m_c;
    
public:
    void setValues(double a, double b, double c) {
        m_a = a;
        m_b = b;
        m_c = c;
    }
    
    void print () {
        cout << "<" << m_a << ", " << m_b << ", " << m_c << ">" << endl;
    };
};