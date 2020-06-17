#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1000000;

int n, k;
ll arr[N+1], dp[N+1];

int solve () {
    dp[0] = 0;

    for (int i = 1; i <= k; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++)
            if (arr[j] <= i)
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
    }

    if (dp[k] == INT_MAX) 
        return -1;

    return dp[k];
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    cout << solve() << endl;

    return 0;
}