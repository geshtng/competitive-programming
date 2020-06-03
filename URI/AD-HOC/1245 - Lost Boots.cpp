#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n) {
        int left[31] = {0};
        int right[31] = {0};
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            int sz;
            char pos;

            cin >> sz >> pos;
            if (pos == 'D') right[sz-30]++;
            else left[sz-30]++;
        }

        for (int i = 0; i < 31; i++) {
            ans += min(left[i], right[i]);
            left[i] = 0;
            right[i] = 0;
        }

        cout << ans << endl;
    }

    return 0;
}