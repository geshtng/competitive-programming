#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a,b);
    }

    return a;
}


int main () {
    int n;
    scanf("%d", &n);

    vector <int> vec(n);
    for(int i = 0; i < n; i++) 
        cin >> vec[i];
    
    ll ans = 0, x = 0;
    for (int i = n-1; i >= 0; i--) {
        ans = gcd(ans, x * vec[i]);
        x = gcd(vec[i], x);
    }

    cout << ans / x << endl;

    return 0;
}