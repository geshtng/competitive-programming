#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b;

    cin >> a >> b;

    cout << (a.length() >= b.length() ? "go" : "no") << endl;

    return 0;
}