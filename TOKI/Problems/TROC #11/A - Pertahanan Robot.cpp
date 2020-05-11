#include<bits/stdc++.h>
using namespace std;

int x = 0, y = 0;
string str;

int main () {
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        switch(str[i]) {
            case 'L': x--; break;
            case 'R': x++; break;
            case 'U': y++; break;
            case 'D': y--; break;
        }
    }

    printf("%d %d\n", x, y);


    return 0;
}