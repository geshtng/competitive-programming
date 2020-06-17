#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string str;

    cin >> n >> str;
    
    string ans;

    ans += str[0];
    for (int i = 1; i < str.size(); i++)
        if (str[i] != str[i-1])
            ans += str[i];

    cout << ans << endl;

    return 0;
}