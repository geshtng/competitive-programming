#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;
    
    int arr[101] = {0};
    int ans = 0;

   

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        arr[x]++;
        if (arr[x] == 2) {
            ans++;
            arr[x] = 0;
        }
    }

    cout << ans << endl;

    return 0;
}