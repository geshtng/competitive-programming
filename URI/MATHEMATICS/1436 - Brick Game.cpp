#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int T, N, x;
    vector <int> vec;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        for(int j = 0; j < N; j++) {
            cin >> x;
            vec.push_back(x);
        }

        cout << "Case " << i+1 << ": " << vec[N/2] << endl;
        vec.clear();
    }

    return 0;
}