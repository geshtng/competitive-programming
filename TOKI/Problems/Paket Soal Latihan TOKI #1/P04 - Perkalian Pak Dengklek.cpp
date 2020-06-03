#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    int ans = 0;

    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) 
        for (int j = 0; j < b.size(); j++) 
            ans += (a[i]-'0') * (b[j]-'0');

    cout << ans << endl;


    return 0;
}