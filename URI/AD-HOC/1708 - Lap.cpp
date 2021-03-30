#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    double x, y;
    double ans;

    cin >> x >> y;

    ans = ceil(y / (abs(x-y)));

    cout << ans << endl;

    return 0;
}