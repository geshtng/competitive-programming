#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ll t;
    ll n, k;

    cin >> t;
    while (t--) {
        cin >> n >> k;
        
        if (k % 2 == 0 && n % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        vector <int> v;
        bool odd = k % 2 == 0 || n % 2 != 0;
        int sum = 0;

        for (int i = 0; i < k-1; i++) {
            v.push_back(odd ? 1 : 2);
            sum += v.back();
        }

        if (n <= sum) {
            cout << "NO" << endl;
            continue;
        }

        v.push_back(n - sum);
        cout << "YES" << endl;
        for(auto &i : v) {
            cout << i << " ";
        }
        cout << endl;
    }


    return 0;
}