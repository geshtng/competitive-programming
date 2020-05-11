#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    int n, k;

    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector <int> v;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        int ans = INT_MAX;
        int mins = n - k;

        for(int i = 0; i+mins <= n; i++) {
            ans = min(ans, v[i+mins-1] - v[i]);
        }

        cout << ans << endl;
    }


    return 0;
}