#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    int mins = *min_element(vec.begin(), vec.end());
    int ans = INT_MAX;
    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (vec[i] == mins) {
            if (pos != -1) {
                ans = min(ans, i - pos);
                pos = i;
            } else pos = i;
        }  
    }

    cout << ans << endl;

    return 0;
}
