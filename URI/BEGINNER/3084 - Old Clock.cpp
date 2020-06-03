#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h, m;
    string hh, mm;

    while (cin >> h >> m) {
        hh = to_string(h / 30);
        mm = to_string(m / 6);

        if (hh.length() == 1) 
            hh.insert(0, "0");

        if (mm.length() == 1)
            mm.insert(0, "0");

        if (m == 360)
            mm = "00";
        
        cout << hh << ":" << mm << endl;
    }

    return 0;
}