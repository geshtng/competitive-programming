#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string str;
    int n;

    cin >> t;
    while (t--) {
        cin >> str;
        int len = str.length();
        int count = 0;
        string res="";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != '0'){
                res += str[i];
                for (int j = 0; j < len-1; j++) {
                    res += "0";
                }
                count++;

                res += " ";
            }

            len--;
        }
        cout << count << endl;
        cout << res << endl;
    }

    return 0;
}