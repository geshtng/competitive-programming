#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    int q, k, val;

    cin >> n >> m;
    int table[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> table[i][j];

    int sum = 0, mins = INT_MAX, maks = INT_MIN;

    cin >> q;
    for (int i = 0; i < q; i++) {
        string op;
        cin >> op >> k >> val;

        if (op == "row") 
            for (int i = 0; i < m; i++)
                table[k-1][i] += val;

        else if (op == "col") 
            for (int i = 0; i < n; i++)
                table[i][k-1] += val;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            sum += table[i][j];
            
            mins = min(mins, table[i][j]);
            maks = max(maks, table[i][j]);
        }

    cout << sum << " " << mins << " " << maks << endl;

    return 0;
}