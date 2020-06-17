#include<bits/stdc++.h>
using namespace std;

int tc;

void sol() {
    int x, s, sum = 0;
    tc++;

    cin  >> x;
    for (int i = 0; i < x; i++) {
        cin >> s;
        if (s < 60)
            sum++;
    }

    cout << "Case #" << tc << ": " << sum << endl;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    tc = 0;

    int t;
    cin >> t;
    while (t--)
        sol();

    return 0;
}
