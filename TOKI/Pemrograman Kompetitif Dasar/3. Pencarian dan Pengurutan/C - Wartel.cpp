#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    vector <string> name, number;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
    
        name.push_back(a);
        number.push_back(b);
    }

    for (int i = 0; i < q; i++) {
        string cari;
        cin >> cari;

        vector <string>::iterator pos = lower_bound(name.begin(), name.end(), cari);
        if (*pos == cari)
            cout << number[pos-name.begin()] << endl;
        else
            cout << "NIHIL" << endl;
    }

    return 0;
}