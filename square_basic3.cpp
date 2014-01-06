#include <iostream>
using namespace std;

void interp(string program) {
    unsigned int program_counter = 0;
    while (program_counter < program.size()) {
        if ( '0' <= program[program_counter] && program[program_counter] <= '9') {
            if (program[program_counter] == '0') {
                // nop.
            } else {
                program[program_counter] = program[program_counter]-1;
                program_counter -= 2;
            }
        } else if (program[program_counter]=='n') {
            cout << endl;
        } else {
            cout << program[program_counter];
        }
        program_counter += 1;
    }
}

int main() {
    string program = "+-8+n| 8|n| 8|n| 8|n| 8|n| 8|n+-8+n";
    interp(program);
    
    return 0;
}