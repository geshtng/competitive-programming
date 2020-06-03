#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, c, d;

    cin >> a >> b;
    cin >> c >> d;

    ll e, f;

    f = (b * d) / __gcd(b,d); 
    a *= f / b;
    c *= f / d;
    e = a + c;
    
    ll hue = __gcd(e,f);
    e /= hue;
    f /= hue;

    cout << e << " " << f << endl;

    return 0;
}