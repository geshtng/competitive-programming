#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    string str;

    cin >> t;
    while (t--) {
        cin >> str;

        bool check = false;

        for (int i = str.length()-1; i >= 0; i--) {
            if (str[i] != '0') {
                check = true;
                break;
            }
            else str.pop_back();
        }

        reverse(str.begin(), str.end());

        if (check)
            cout << str << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}