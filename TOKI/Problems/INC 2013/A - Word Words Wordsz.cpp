#include<bits/stdc++.h>
using namespace std;

int t, tc;
int n;
string str;


void sol() {
    int A = 0, B = 0, C = 0;
    tc++;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str.length() == 4) A++;
        else if (str.length() == 5) B++;
        else if (str.length() == 6) C++;
    }

    cout << "Case #" << tc << ": " << A << " " << B << " " << C << endl;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    tc = 0;

    cin >> t;
    while (t--)
        sol();

    return 0;
}