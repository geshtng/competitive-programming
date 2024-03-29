#include <bits/stdc++.h>
using namespace std;

#define N_MAX 1000001

int solns[N_MAX];

void initialize_solns() {
    for (int i = 0; i < N_MAX; i++) {
        solns[i] = 0;
    }
    solns[1] = 1;
    solns[2] = 2;
    solns[3] = 3;
    solns[4] = 3;

    // Actually solve
    for (int i = 1; i < N_MAX; i++) {
        if (!solns[i] || solns[i-1] + 1 < solns[i]) {
            solns[i] = solns[i-1] + 1;
        }
        for (int j = 1; j <= i && j * i < N_MAX; j++) {
            if (!solns[j*i] || solns[i] + 1 < solns[j*i]) {
                solns[j*i] = solns[i] + 1;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    cout << solns[n] << "\n";
}

int main() {
    initialize_solns();

    int q;

    cin >> q;
    while (q--) solve();

    return 0;
}
