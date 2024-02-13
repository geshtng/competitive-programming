#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str; cin >> str;
    int n = str.length(), idx;
    bool fix = false;

    for (idx = 1; idx < n; idx++)
        if (islower(str[idx])) break;
        
    if (idx == n)
        for (int i = 0; i < n; i++)
            str[i] = (islower(str[i])) ? toupper(str[i]) : tolower(str[i]);

    cout << str << endl;    

    return 0;
}
