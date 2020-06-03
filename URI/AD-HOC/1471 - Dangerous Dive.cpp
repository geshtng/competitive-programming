#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r;

    while (cin >> n >> r) {
        int arr[n+1];

        memset(arr, 0, sizeof(arr));
        
        for (int i = 0; i < r; i++) {
            int x; cin >> x;
            arr[x]++;
        }

        vector <int> vec;

        for (int i = 1; i <= n; i++) {
            if (arr[i] == 0)
                vec.push_back(i);
        }

        if (vec.size() == 0)
            cout << "*";
        else
            for (auto i : vec)
                cout << i << " ";

        cout << endl;
    }

    return 0;
}