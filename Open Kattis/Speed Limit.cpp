#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n) {
        if (n == -1) break;
        
        int t[n], s[n];
        int sum = 0;
        for (int i = 1; i <= n; i++) 
            cin >> t[i] >> s[i];

        s[0] = 0;
        for (int i = 1; i <= n; i++) {
            sum += (t[i] * (s[i] - s[i-1]));
        }

        cout << sum << " miles" << endl;
    }

    return 0;
}