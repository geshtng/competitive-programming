#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.length(); i++) 
            if ((str[i] == ',' || str[i] == '.') && str[i-1] == ' ')
                str.erase(i-1, 1);

        cout << str << endl;
    }

    return 0;
}