#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;
    
    cout << str[0];
    for (int i = 1; i < str.length(); i++) 
        if (str[i] == '-') 
            cout << str[i+1];

    cout << endl;

    return 0;
}
