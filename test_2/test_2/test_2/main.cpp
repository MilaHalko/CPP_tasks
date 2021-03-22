#include "MyLib.hpp"

int main() {
    
    Numbers n1;
    n1.set(3, 3);
    
    Numbers n2 { 4, 4};
    
    n1.print();
    n2.print();
    return 0;
}
