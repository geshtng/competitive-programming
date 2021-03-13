#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++) 
        cin >> arr[i];

    cout << "Array before sort:" << endl;
    for (int i = 0; i < t; i++)
        cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, t);

    cout << "Array after sort:" << endl;
    for (int i = 0; i < t; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}