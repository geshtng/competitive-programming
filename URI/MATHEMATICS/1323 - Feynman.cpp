#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N;
    int ans;

    while (cin >> N) {
        if (N == 0) break;
        ans = (N * (N + 1)) * (2 * N + 1);
        cout << ans/6 << endl;
    }

    return 0;
}