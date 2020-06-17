#include<bits/stdc++.h>
using namespace std;

int sol(int arr[], int n) {
    pair <int, int> arrPos[n];
    
    for (int i = 0; i < n; i++) {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

    sort(arrPos, arrPos + n);

    vector <bool> vec(n, false);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (vec[i] || arrPos[i].second == i)
            continue;

        int cyc = 0;
        int j = i;
        
        while (!vec[j]) {
            vec[j] = 1;
            j = arrPos[j].second;
            cyc++;
        }

        if (cyc > 0) {
            ans += (cyc - 1);
        }
    }

    return ans;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    
    cout << sol(arr, n) << endl;

    return 0;
}