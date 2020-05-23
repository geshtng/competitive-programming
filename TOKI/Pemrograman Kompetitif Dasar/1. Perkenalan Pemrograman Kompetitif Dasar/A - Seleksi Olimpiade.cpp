#include<bits/stdc++.h>
using namespace std;

bool sortcolumn(const vector <int> &v1, const vector <int> &v2) {
    return v1[2] < v2[2];
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, m;
    string str;

    cin >> t;
    while (t--) {
        cin >> n >> m;
        cin >> str;

        string arr[n];
        vector <vector <int> > table;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            vector <int> v1;
            for (int j = 0; j < 3; j++) {
                int x; cin >> x;
                v1.push_back(x);
            }

            v1.push_back(i);
            table.push_back(v1);
        }

        sort(table.rbegin(), table.rend(), sortcolumn);

        string arrSorted[n];
        for (int i = 0; i < n; i++) 
            arrSorted[table[i][3]] = arr[i];
        
        bool check = false;

        for (int i = 0; i < m; i++) 
            if (str == arrSorted[i]) {
                check = true;
                break;
            }

        string ans = (check) ? "YA" : "TIDAK";

        cout << ans << endl;
    }


    return 0;
}