#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    scanf("%d", &n);
    
    string ans = (n % 2 == 1) ? "Perlu" : "Tidak";

    cout << ans << endl;

    return 0;
}