#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sol(vector <int> vec, int V) {
    int table[V+1];

    table[0] = 0;

    for(int i = 1; i <= V; i++) {
        table[i] = INT_MAX;
    }

    for(int i = 1; i <= V; i++) {
        for(int j = 0; j < vec.size(); j++) {
            if (vec[j] <= i) {
                int sub_res = table[i - vec[j]];
                if(sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
        }
    }

    return table[V];
}

int main () {
    int T;
    int N, M;

    cin >> T;
    while (T--) {
        cin >> N >> M;
        
        vector <int> vec(N);
        int X;
        
        for(int i = 0; i < N; i++) {
            cin >> X;
            vec.push_back(X);
        }

        sort(vec.begin(), vec.end());
        
        cout << sol(vec, M) << endl;

        vec.clear();
    }


    return 0;
}