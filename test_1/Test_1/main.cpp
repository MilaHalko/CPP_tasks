#include "functions.h"

int main() {
    string str = "";
    cout << "Write string: "; cin >> str;
    cout << endl;
    
    bool answer = IsItSandwich(str);
    
    if (answer) {
        cout << "isIcecreamSandwich ('"<< str << "') -> true" << endl;
    }
    else {
        cout << "isIcecreamSandwich ('"<< str << "') -> false" << endl;
    }
    
    return 0;
}
