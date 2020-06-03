#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;

    while (getline(cin, str)) {
        for (int i = 0; i < str.length(); i++) {
            switch (str[i]) {
                case '@': cout << "a"; break;
                case '&': cout << "e"; break;
                case '!': cout << "i"; break;
                case '*': cout << "o"; break;
                case '#': cout << "u"; break;
                default: cout << str[i];
            }
        }

        cout << endl;
    }

    return 0;
}