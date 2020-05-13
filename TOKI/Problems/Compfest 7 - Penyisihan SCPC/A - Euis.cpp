#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

const int MOD = 1e9 + 7;

int main () {
    string str;
    getline(cin, str);

    ull ans = 1;
    for (int i = 0; i < str.length(); i++) {
        if (i+1 < str.length() && str[i] == 'e' && str[i+1] == 'u') {
            ans *= 3;
            ans %= MOD;
            i++;
        }
        else if(str[i] == 'e') {
            ans *= 2;
            ans %= MOD;
        }
    }

    printf("%llu\n", ans);


    return 0;
}