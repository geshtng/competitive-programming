#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void toHex(string n) {
    ll num = stoll(n);

    stringstream ss;
    ss << hex << num;
    string res = ss.str();

    cout << "0x";
    for(int i=0; i<res.length(); i++) {
        if(islower(res[i]))
            putchar(toupper(res[i]));
        else
            cout << res[i];
    }

    cout << endl;
}

void toDec(string num) {
    ull x;
    stringstream ss;
    ss << hex << num;
    ss >> x;

    cout << x << endl;
}

int main () {
    string N;

    while(cin >> N) {
        if(N[0] == '-') break;

        if(N[1] == 'x')
            toDec(N);
        else
            toHex(N);

        N.clear();
    }

    return 0;
}