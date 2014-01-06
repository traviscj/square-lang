#include <iostream>
using namespace std;


void top() {
    cout << "+";
    for (int i=0; i<8; i++) cout << "-";
    cout << "+" << endl;
}

void middles() {
    cout << "|";
    for (int i=0; i<8; i++)
        cout << " ";
    cout << "|";
    cout << endl;
    
}

int main() {
    top();
    for (int j=0; j<5; j++) {
        middles();
    }
    top();
    
    return 0;
}