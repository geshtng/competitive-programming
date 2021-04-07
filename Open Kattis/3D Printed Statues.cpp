#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x = 1, sum = 0, ans = 0;

    cin >> n;
    while (sum < n) {
        if (n-sum > x) {
            ans++;
            x += x;
        } else {
            ans++;
            sum += x;
        }
    }

    cout << ans << endl;

    return 0;
}