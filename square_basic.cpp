#include <iostream>
using namespace std;

int main() {
    
    cout << "+";
    for (int i=0; i<8; i++) cout << "-";
    cout << "+" << endl;
    
    for (int j=0; j<5; j++) {
        cout << "|";
        for (int i=0; i<8; i++)
            cout << " ";
        cout << "|";
        cout << endl;
    }
    
    cout << "+";
    for (int i=0; i<8; i++) cout << "-";
    cout << "+" << endl;
    
    return 0;
}