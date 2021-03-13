#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int t, int n) {
    int ans;
    int left = 0, right = t-1;

    while ((left <= right)) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == n)
            return mid;

        if (arr[mid] < n)
            left = mid + 1;
        else
            right = mid - 1;   
    }

    return -1;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    
    cin >> t;
    int arr [t];

    for (int i = 0; i < t; i++)
        cin >> arr[i];

    cin >> n;

    int ans = binarySearch(arr, t, n);

    if (ans != -1) 
        cout << "Angka " << n << " ditemukan di index " << ans << endl;
    else
        cout << "Angka " << n << " tidak ditemukan" << endl;
 
    return 0;
}
