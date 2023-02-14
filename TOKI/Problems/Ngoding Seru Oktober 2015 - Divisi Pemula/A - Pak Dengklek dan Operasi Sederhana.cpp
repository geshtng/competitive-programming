#include <bits/stdc++.h>
using namespace std;

int scan_int() {
    int result = 0;
    bool negative = false;
    char ch;

    while (true) {
        ch = getchar_unlocked();
        if (ch == ' ' || ch == '\n') continue;
        
        if (ch == '-') { 
            negative = true; 
            continue; 
        } else if (ch < '0' || ch > '9') continue;
        else break;
    }

    result = ch - '0';

    while (true) {
        ch = getchar_unlocked();
        if (ch >= '0' && ch <= '9') result = (result << 3) + (result << 1) + (ch - '0');
        else break;
    }

    if (negative) result = -result;
    return result;
}

int main() {
    int x = scan_int();
    int y = scan_int();

    cout << x + y << "\n";
    cout << x - y << "\n";
    cout << x * y << "\n";
    cout << x / y << "\n";
    cout << x % y << "\n";
}