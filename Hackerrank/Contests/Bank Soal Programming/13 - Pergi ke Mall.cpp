#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string days[] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};
    string str;
    vector <int> vec;
    

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }
    
    int lcm = vec[0];

    for (int i = 1; i < n; i++) {
        lcm = (vec[i] * lcm) / (__gcd(vec[i], lcm));
    }

    cin >> str;
    int pos = 0;

    for (int i = 0; i < 7; i++) {
        if (days[i] == str) {
            pos = i;
            break;
        }
    }

    cout << days[(lcm + pos) % 7] << endl;

    return 0;
}