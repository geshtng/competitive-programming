#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;cin >> n;
    int odd = 0, even = 0;


    for(int i=0; i<n; i++){
        cin >> x;
        if(x%2 != 0)odd++;
        else even++;
    }

    if(odd<=even)cout << odd << endl;
    else{
        int ans, countr;
        ans = odd-even;
        countr = ans/2;

        cout << countr+even << endl;
    }

    return 0;
}