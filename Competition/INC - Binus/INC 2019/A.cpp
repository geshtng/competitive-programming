#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;

    cin >> n;
    int binus[n], opp[n];

    for(int i=0; i<n; i++) {
        cin >> binus[i];
    }

    for(int i=0; i<n; i++) {
        cin >> opp[i];
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (binus[i] == opp[i]) {
            ans += 1;
        }
        else if (binus[i] > opp[i]) {
            ans +=3;
        }
    }

    cout << ans << endl;


    return 0;
}
