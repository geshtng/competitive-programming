#ifndef LOCAL
    #pragma GCC optimize ("Ofast")
    #pragma GCC optimize ("unroll-loops")
#endif

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

#define FOR(i, a, b) for(int i = int(a); i < int(b); i++)
#define REP(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for(int i = int(b)-1; i >= int(a); i--)
#define PER(i, b) ROF(i, 0, b)

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define bg begin()
#define en end()
#define st first
#define nd second

int dp[1000001][20];

void generate(vector <int> vec, int n, int m) {
    REP(i, n) dp[i][0] = vec[i];

    FOR(j, 1, 21)
        for (int i = 0;  i + (1 << j) <= n; i++)
            dp[i][j] = (dp[i][j - 1] * dp[i + (1 << (j - 1))][j - 1]) % m;
}

int slv(int left, int right, int m) {
    int sum = 1;
    ROF(j, 0, 21) {
        if ((1 << j) <= right - left + 1) {
            sum *= dp[left][j];
            sum %= m;
            left += 1 << j;
        }
    }

    return sum;
}

void solve() {
    int n, m; cin >> n >> m;
    vector <int> vec(n);

    REP(i, n) cin >> vec[i];

    generate(vec, n, m);

    string str; cin >> str;
    int left = 0, right = n-1;

    REP(i, n) {
        cout << slv(left, right, m) << " ";
        
        if (str[i] == 'L') left++;
        else right--;
    }

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
