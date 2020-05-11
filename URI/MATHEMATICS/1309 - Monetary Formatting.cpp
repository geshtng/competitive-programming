#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    string X, Y;
    string ans = "", res = "";

    while (cin >> X >> Y) {
        ans += "$";
        string temp = X;

        reverse(temp.begin(), temp.end());
        
        for(int i=temp.length()-1; i>=0; i--) {
            if (temp[i] == '0') temp.pop_back();
            else break;
        }

        for(int i=0, j=1; i<temp.length(); i++, j++) {
            if(j == 4) {
                res += ",";
                j = 1;
            }

            res += temp[i];
        }
        
        reverse(res.begin(), res.end());

        if (res.length() == 0) 
            ans += "0";

        ans += res + ".";

        if (Y.length() == 1) 
            ans += "0";
        
        ans += Y;
        

        cout << ans << endl;

        ans.clear();
        res.clear();
        temp.clear();
    }

    return 0;
}