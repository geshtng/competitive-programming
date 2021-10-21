#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;

    cin >> n;
    
    vector <int> vec;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    for (int i = vec.size()-1; i >= 0; i--) {
        if (vec[i] != i+1) {
            if ((i-1) >= 0 && vec[i-1] == i+1) {
                swap(vec[i], vec[i-1]);
                ans++;
            }
            else if ((i-2) >= 0 && vec[i-2] == i+1) {
                vec[i-2] = vec[i-1];
                vec[i-1] = vec[i];
                vec[i] = vec[i-2];
                
                ans += 2;
            } 
            else {
                cout << "Too chaotic\n";
                return;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int tt;

    cin >> tt;
    while(tt--) solve();

    return 0;
}