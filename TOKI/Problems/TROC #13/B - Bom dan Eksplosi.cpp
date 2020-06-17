#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, r;
    cin >> n >> m >> r;

    int ans = (min(n, m) + 2 * r) / (2 * r + 1);

    cout << ans << endl;

    return 0;
}
