#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    bool check = true;

    cin >> a >> b;
    if (a.length() == b.length()+1) {
        int sum = 0;
        for (int i = 0, j = 0; i < b.length(); i++, j++) {
            if (b[i] != a[j]) {
                sum ++;
                j++;
            }
        }

        if (sum > 1) check = false;
    } else {
        check = false;
    }

    string ans = (check) ? "Tentu saja bisa!" : "Wah, tidak bisa :(";

    cout << ans << endl;


    return 0;
}