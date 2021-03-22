#include "myLib.hpp"

string readFile() {
    
    ifstream fin("Array.txt");
    string file;
    
    if (!fin.is_open()) {
        cout << "Unable to open a file!" << endl;
    }
    else {
        getline(fin, file);
    }
    
    return file;
}

int makeArray (string file, Numbers* number) {
    
    int i = 0;
    
    while (!file.empty()) {
        int pos = file.find(" ");
        
        if (pos == -1)
        {
            pos = file.size();
        }
        
        int num = stoi(file.substr(0, pos));
        
        if (!(num % 2))
        {
            number[i].num = num;
            i++;
        }
        
        file.erase(0, pos + 1);
    }
    return i;
}

void printArray (Numbers* number, int i) {
    
    ofstream fout ("Result.txt");
    
    if (!fout) {
        cout << "Unable to open a file!" << endl;
    }
    else {
        for (int j = 0; j < i; j++) {
            fout << number[j].num << " ";
        }
    }
}
