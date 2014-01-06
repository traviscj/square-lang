#include <iostream>
using namespace std;

void interp(string program) {
    // current index into string. (think of as a program counter!)
    unsigned int program_counter=0;
    string last_recurse="";
    
    while (program_counter<program.length()) {
        if ('0' < program[program_counter] && program[program_counter] <= '9') {
            // 0-9 control looping:
            --program[program_counter];
            if ('0' != program[program_counter]) --program_counter;
            else ++program_counter;
        } else if ('(' == program[program_counter]) {
            unsigned int openparen = 1, count = 0;
            while (0 != openparen) {
                ++program_counter;
                if (')' == program[program_counter]) {
                    --openparen;
                    if (0==openparen) break;
                }
                ++count;
            }
            last_recurse = program.substr(program_counter-count, count);
        }
        if (')'==program[program_counter]) interp(last_recurse);
        else if ('n'==program[program_counter]) cout << endl;
        else cout << program[program_counter];
        ++program_counter;
    }
}

int main() {
    string sorig = "+-7+n(| 7|n)5+-7+nnn";
    interp(sorig);
    // // square in positive space
    // string spos="#8n# 6#n(# 2#2 2#n)2# 6#n#8n";
    // interp(spos);
    // // square in negative space
    // string sneg=" 8n #6 n( #2 2#2 n)2 #6 n 8n";
    // interp(sneg);
    
    string spos="square, >0 spacen#8n# 6#n(# 2#2 2#n)2# 6#n#8nnn";
    interp(spos);
    string sneg="square, <0 spacen 8n #6 n( #2 2#2 n)2 #6 n 8n";
    interp(sneg);
    return 0;
}