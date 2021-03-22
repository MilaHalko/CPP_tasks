#include "functions.h"


bool IsItSandwich(string str) {
    int size = str.size();
    bool result;
    
    if (size <= 3) {
        return result = false;
    }
    
    int i = 0;
    string first = "";
    string second = "";
    string third = "";
    
    first = str[i];
    while (str[i] == str[i+1]) {
        first += str[i+1];
        i++;
    }
    if (i == size - 1) {
        return result = false;
    }
    
    i++;
    second = str[i];
    
    while (str[i] == str[i+1]) {
        second += str[i+1];
        i++;
    }
    if (i == size - 1) {
        return result = false;
    }
    
    i++;
    third = str.substr(i);
    
    if (first == third) {
        result = true;
    }
    
    return result;
}

