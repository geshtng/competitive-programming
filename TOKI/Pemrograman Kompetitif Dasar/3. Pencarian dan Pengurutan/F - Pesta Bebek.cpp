#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string str;
    vector <string> vstr;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        vstr.push_back(str);

        sort(vstr.begin(), vstr.end());

        ptrdiff_t pos = find(vstr.begin(), vstr.end(), str) - vstr.begin();

        cout << pos + 1 << endl;
    }

    return 0;
}
