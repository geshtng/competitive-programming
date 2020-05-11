#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int a,b,c;
    int x,y,z;
    int ans = 0;

    cin >> a >> b >> c;
    cin >> x >> y >> z;

    if(x > a) ans += (x-a);
    if(y > b) ans += (y-b);
    if(z > c) ans += (z-c);

    cout << ans << endl;

    return 0;
}