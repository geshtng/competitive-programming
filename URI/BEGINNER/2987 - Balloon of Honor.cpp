#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ch;

    cin >> ch;
    for(int i = 0 ; i < str.size() ; i++) {
        if (ch == str[i]) {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}