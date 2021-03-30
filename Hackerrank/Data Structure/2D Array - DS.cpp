#include<bits/stdc++.h>
using namespace std;

int arr[6][6];

int get_sum(int x, int y) {
    int res = 0;

    res += arr[x-1][y-1];
    res += arr[x-1][y];
    res += arr[x-1][y+1];
    res += arr[x][y];
    res += arr[x+1][y-1];
    res += arr[x+1][y];
    res += arr[x+1][y+1];

    return res;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            cin >> arr[i][j];

    int sum = INT_MIN;

    for (int i = 1; i < 5; i++)
        for (int j = 1; j < 5; j++)
            sum = max(sum, get_sum(i, j));

    cout << sum << endl;

    return 0;
}
