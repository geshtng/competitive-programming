#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, d;

    cin >> n >> d;
    
    int arr[n+1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == d) {
            pos = i;
            break;
        }
    }

    cout << pos << endl;

    return 0;
}