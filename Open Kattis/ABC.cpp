#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[3];
    string str;

    cin >> arr[0] >> arr[1] >> arr[2];
    cin >> str;

    sort(arr, arr+3);

    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
            case 'A': cout << arr[0] << " ";  break;
            case 'B': cout << arr[1] << " ";  break;
            case 'C': cout << arr[2] << " ";  break;
        }
    }

    cout << endl;

    return 0;
}