#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n; cin >> n;
    vector <int> vec(n);
    LL sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
    }

    LL diff = 0;
    sum /= n;

    for(int i = n - 1; i >= 0; i--){ 
        diff -= (vec[i] - sum); 
        
        if (diff < 0){ 
            cout << "NO\n";
            return;
        } 
    } 
    
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
