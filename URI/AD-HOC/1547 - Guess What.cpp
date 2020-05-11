#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N;
    int Q, T;

    cin >> N;
    while (N--) {
        cin >> Q >> T;
        int arr[Q];

        for(int i = 0; i < Q; i++) {
            cin >> arr[i];
        }

        int mins = INT_MAX;
        bool hue = false;
        int ans;

        for (int i = 0; i < Q; i++) {
            if (arr[i] == T) {
                cout << i + 1 << endl;
                hue = false;
                break;
            } else {
                if (abs(arr[i] - T) < mins) {
                    mins = abs(arr[i] - T);
                    ans = i + 1;
                    hue = true;
                }
            }
        }

        if (hue)
            cout << ans << endl;
    }

    return 0;
}