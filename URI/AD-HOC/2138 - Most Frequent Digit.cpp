#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <int> vec, val;

void generate() {
    for(int i=0; i<10; i++) {
        vec.push_back(i);
        val.push_back(0);
    }
}

int main () {
    string str;

    while (cin >> str) {
        generate();
        sort(str.begin(), str.end());

        for(int i=0; i<str.length(); i++) {
            switch(str[i]){
                case '0': vec[0] = val[0]++; break;
                case '1': vec[1] = val[1]++; break;
                case '2': vec[2] = val[2]++; break;
                case '3': vec[3] = val[3]++; break;
                case '4': vec[4] = val[4]++; break;
                case '5': vec[5] = val[5]++; break;
                case '6': vec[6] = val[6]++; break;
                case '7': vec[7] = val[7]++; break;
                case '8': vec[8] = val[8]++; break;
                case '9': vec[9] = val[9]++; break;
            }    
        }

        int maks = 0;
        int ans;
        for(int i = 0; i < 10; i++) {
            if(val[i] >= maks) {
                maks = val[i];
                ans = i;
            }
        }

        cout << ans << endl;

        vec.clear();
        val.clear();
    }
    
    return 0;
}