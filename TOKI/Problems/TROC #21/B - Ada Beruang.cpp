#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    vector <int> vec, bear;

    cin >> n >> d;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
        bear.push_back(x + d);
    }

    int ans = 0;
    int i = 0, j = 0;

    while (i < n && j < n) {
        if (vec[i] == bear[j]) ans++, i++, j++;
        else if (vec[i] < bear[j]) i++;
        else j++;
    }

    cout << ans << "\n";

    return 0;
}
