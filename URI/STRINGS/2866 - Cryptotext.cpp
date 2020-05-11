#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int T;
    string str;

    cin >> T;
    while (T--) {
        cin >> str;

        string temp = "";
        for(int i = 0; i < str.length(); i++) {
            if(islower(str[i])){
                temp += str[i];
            }
        }

        reverse(temp.begin(), temp.end());

        cout << temp << endl;

        temp.clear();
    }


    return 0;
}