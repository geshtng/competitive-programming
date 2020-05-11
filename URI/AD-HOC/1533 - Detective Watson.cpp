#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N, res;

    while (cin >> N) {
        if (N == 0) break;
        
        int arr[N];
        int arrN[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        memcpy(arrN, arr, sizeof arrN);
        sort(arrN, arrN + N);

        res = arrN[N - 2];

        for (int i = 0; i < N; i++) {
            if (arr[i] == res) {
                cout << i+1 << endl;
            }
        }
    }

    return 0;
}