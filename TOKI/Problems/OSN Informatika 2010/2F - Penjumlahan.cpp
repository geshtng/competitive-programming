#include <bits/stdc++.h>
using namespace std;

void print_vec (vector <int> vec) {
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    string a, b;

    cin >> a >> b;

    int longer = max(a.size(), b.size());
    vector <int> x(longer, 0), y(longer, 0), ans;

    for (int i = 0; i < longer; i++) {
        if (i < a.size()) x.push_back(a[i] - 48);
        if (i < b.size()) y.push_back(b[i] - 48);
    }
    
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    int temp = 0;

    for (int i = 0; i < longer; i++) {
        int sum = x[i] + y[i] + temp;

        ans.push_back(sum);
        temp = 0;

        if (ans[i] > 9) {
            ans[i] %= 10;
            temp = 1;
        }
    }

    if (temp == 1) ans.push_back(1);

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];
    cout << endl;

    return 0;
}
