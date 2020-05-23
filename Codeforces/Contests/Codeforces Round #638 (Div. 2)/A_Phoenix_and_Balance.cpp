#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;
        int x = 0, y = 0;

        for (int i = 1; i < n/2; i++)
            x += pow(2,i);
        x += pow(2,n);

        for (int i = n/2; i < n; i++) 
            y += pow(2,i);

        // cout << x << " " << y << endl;

        int ans = abs(x - y);

        cout << ans << endl;
    }

    return 0;
}