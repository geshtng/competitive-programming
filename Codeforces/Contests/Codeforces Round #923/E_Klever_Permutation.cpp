#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, k; cin >> n >> k;
    vector <int> ans;
    
    ans.push_back(n);

    for (int i = 1; i < k; i++) 
        ans.push_back(ans.back() - (n-i)/k-1);

    ans.push_back(0);

    for (int i = 1; i < k; i += 2) 
        ans[i] = ans[i+1] + 1;

    ans.pop_back();

    int res = 0;
    bool check = false;
    while (ans.size() < n) {
        (check) ? ans.push_back(ans[res] + 1) : ans.push_back(ans[res] - 1);
        check = !check;

        res++;
    }

    for (auto i : ans) cout << i << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
