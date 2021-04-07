#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int e, f, c;

    cin >> e >> f >> c;
    
    int sum = e + f;
    int ans = 0;
    while (sum >= c) {
        sum -= c;
        sum++;
        ans++;
    }

    cout << ans << endl;

    return 0;
}