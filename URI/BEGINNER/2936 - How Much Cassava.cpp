#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    ll sum = 225;

    for(int i=0; i<5; i++) {
        cin >> n;
        switch(i) {
            case 0: sum += (n*300); break;
            case 1: sum += (n*1500); break;
            case 2: sum += (n*600); break;
            case 3: sum += (n*1000); break;
            case 4: sum += (n*150); break;
        }
    }

    cout << sum << endl;


    return 0;
}
