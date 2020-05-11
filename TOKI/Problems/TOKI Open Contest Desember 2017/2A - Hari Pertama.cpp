// Wrong Answer

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int a, b;
    ll x;
    double div;

    scanf("%d %d", &a, &b);
    
    x = (ll) a * b;
    div = (double) x / 9.0;

    string str = to_string(div);

    printf("%.11lf\n", div);

    return 0;
}