#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<char> v = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; ++i) {
        int x = (n / 5) + (i < n % 5);
        cout << string(x, v[i]);
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}