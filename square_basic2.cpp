#include <iostream>
using namespace std;

void row(string first_last, string middle) {
    cout << first_last;
    for (int i=0; i<8; i++) cout << middle;
    cout << first_last << endl;
}

int main() {
    row("+", "-");
    for (int j=0; j<5; j++) {
        row("|", " ");
    }
    row("+", "-");
        
    return 0;
}