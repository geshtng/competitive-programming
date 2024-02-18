#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

bool check(int x, vector <vector <int>> &vec, vector <int> &tree, vector <int> &visited) {
    tree[x] = 1;
    visited[x] = 1;

    for (auto i : vec[x])
        if ((!visited[i] && check(i, vec, tree, visited)) || tree[i]) return true;

    tree[x] = 0;
    
    return false;
}

void solve() {
    int n, k; cin >> n >> k;

    vector <int> visited(n+1, 0), tree(n+1, 0);
    vector <vector <int>> vec(n+1);

    for (int i = 0; i < k; i++) {
        vector<int> temp(n);

        for (int j = 0; j < n; j++) cin >> temp[j];

        for (int j = 2; j < n; j++) vec[temp[j - 1]].push_back(temp[j]);
    }
    
    for(int i = 1; i <= n; i++) {
        if(visited[i] == 0 && check(i, vec, tree, visited)) {
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
