#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    if (a == 0) return b;

    return gcd(b % a, a);
}

int tripleGCD(vector<int> vec) {
    int res = vec[0];
    for(int i=1; i<vec.size(); i++) {
        res = gcd(vec[i], res);
    }

    return res;
}

int main () {
    int x, y, z;
    int a, b, c;
    vector <int> vec;
    int maks;

    while (cin >> x >> y >> z) {
        vec.push_back(x);
        vec.push_back(y);
        vec.push_back(z);

        maks = max(x, max(y,z));
        a = maks;
        if (a == x){
            b = y;
            c = z;
        }
        else if (a == y) {
            b = x;
            c = z;
        }
        else if (a == z) {
            b = x;
            c = y;
        }

        if(pow(a,2) == (pow(b,2) + pow(c,2))) {
            cout << "tripla pitagorica";
            
            if(tripleGCD(vec) == 1) 
                cout << " primitiva";

            cout << endl;
        } else {
            cout << "tripla" << endl;
        }

        vec.clear();
    }

    return 0;
}