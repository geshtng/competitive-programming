#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    long long int n;

    cin >> str;
    cin >> n;

    long long int ans = 0;

    for (int i = 0; i < str.size(); i++)
        if (str[i] == 'a') 
            ans++;

    ans *= n/str.size();

    for (int i = 0; i < n % str.size(); i++)
        if (str[i] == 'a')
            ans++;

    cout << ans << endl;

    return 0;
}
