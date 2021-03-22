#include <iostream>
#include <stdio.h>

using namespace std;

class Stack {
    int arr[10];
    int next;
    
public:
    void reset () {
        for (int j = 0; j < 10; j++) {
            arr[j] = 0;
        }
        next = 0;
    }
    
    bool push (int n) {
        arr[next] = n;
        next++;
        return (next - 1 < 10);
    }
    
    void pop () {
        assert(next > 0);
        next--;
    }
    
    void print () {
        cout << "( ";
        for (int j = 0; j < next; j++) {
            cout << arr[j] << " ";
        }
        cout << ")" << endl;
    }
};


int main()
{
    Stack stack;
    stack.reset();
 
    stack.print();
 
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
 
    stack.pop();
    stack.print();
 
    stack.pop();
    stack.pop();
 
    stack.print();
 
    return 0;
}
