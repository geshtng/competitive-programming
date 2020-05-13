#include<bits/stdc++.h>
using namespace std;

int n, k;
int arr[110];
double total, ans;

int main() {
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> arr[i];

    total = (double) 1 / n;
    ans = (double) total / (n-1-k);

    printf("%.5lf\n", ans);    

    return 0;
}