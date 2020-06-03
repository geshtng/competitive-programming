#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    vector <int> vec;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    cout << vec[k-1] << endl;

    return 0;
}