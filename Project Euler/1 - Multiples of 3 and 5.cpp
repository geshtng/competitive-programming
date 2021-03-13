#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void sol() {
    ll N;

    cin >> N;
    --N;

    ll sum_3 = 3 * (N/3) * ((N/3) + 1) / 2;
    ll sum_5 = 5 * (N/5) * ((N/5) + 1) / 2;
    ll sum_15 = 15 * (N/15) * ((N/15) + 1) / 2;

    ll ans = sum_3 + sum_5 - sum_15;

    cout << ans << endl;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;

    cin >> T;
    while (T--)
        sol();

    return 0;
}