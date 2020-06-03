#include<bits/stdc++.h>
using namespace std;

const int N = 77777;

vector <int> prime;

void generate() {
    int n = 2;
    for (int i = 1; i <= N; n++) {
        int base = 2;
        bool check = true;

        while(base <= sqrt(n)) {
            if (n % base == 0) {
                check = false;
                break;
            }
            
            base++;
        }

        if (check) {
            prime.push_back(n);
            i++;
        }
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, k;

    generate();

    cin >> t;
    while (t--) {
        cin >> k;
        cout << prime[k-1] << endl;
    }

    return 0;
}