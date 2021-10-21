#include <bits/stdc++.h>
using namespace std;

bool solve(string str, string comp) {
    sort(comp.begin(), comp.end());
    sort(str.begin(), str.end());

    if (str == comp) return true;

    return false;
}

int main () {
    string str;
    string comp = "TIXID";

    cin >> str;
   
    cout << solve(str, comp) << endl;

    return 0;
}