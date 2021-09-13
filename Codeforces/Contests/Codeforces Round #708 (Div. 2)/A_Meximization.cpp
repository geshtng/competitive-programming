#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;

    cin >> n;
    
    vector <int> vec;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    vector <int> ans;
    vector <int> dup;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != vec[i+1]) {
            ans.push_back(vec[i]);
        } else {
            dup.push_back(vec[i]);
        }
    }

    for (int i = 0; i < dup.size(); i++) {
        ans.push_back(dup[i]);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;
    while (t--) 
        solve();

    return 0;
}
