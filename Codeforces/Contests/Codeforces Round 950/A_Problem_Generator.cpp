#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;

    int diff[7] = {0};
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A')
            diff[0]++;
        else if (str[i] == 'B')
            diff[1]++;
        else if (str[i] == 'C')
            diff[2]++;
        else if (str[i] == 'D')
            diff[3]++;
        else if (str[i] == 'E')
            diff[4]++;
        else if (str[i] == 'F')
            diff[5]++;
        else if (str[i] == 'G')
            diff[6]++;
    }

    int ans = 0;
    for (int i = 0; i < 7; i++)
        if (diff[i] < m)
            ans += m - diff[i];

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
