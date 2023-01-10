#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    int x, y;
 
    cin >> a >> x;
    cin >> b >> y;
 
    int acount = a.size();
    int bcount = b.size();
 
    acount += x;
    bcount += y;
 
    if (acount == bcount) {
        if (a.size() < b.size()) while (a.size() < b.size())  a += '0';
        else while (b.size() < a.size()) b += '0';

        stringstream st(a);
        stringstream nd(b);

        long long aa = 0;
        long long bb = 0;
 
        st >> aa;
        nd >> bb;

        if (aa == bb) cout << "=\n";
        else (aa > bb) ? cout << ">\n" : cout << "<\n";
    } else(acount > bcount) ? cout << ">\n" : cout << "<\n";
}

int main() {
    int t;

    cin >> t;
    while (t--) solve();

    return 0;
}
