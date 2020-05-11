#include<bits/stdc++.h>
using namespace std;

int main () {
    string str;

    getline(cin, str);

    size_t pos;
    pos = str.find("ideafuse");
    if (pos != string::npos) 
        cout << pos + 1 << endl;
    else 
        cout << "-1" << endl;

    return 0;
}