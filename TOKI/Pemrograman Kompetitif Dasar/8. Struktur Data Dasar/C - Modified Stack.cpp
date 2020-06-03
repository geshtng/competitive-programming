#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y;
    string str;
    int arr[1000][3];
    int idx = 0, len = 0;

    cin >> n;
    while (n--) {
        cin >> str;
        if (str == "add") {
            cin >> x >> y;
            
            idx++;

            arr[idx][0] = x;
            arr[idx][1] = y;
            
            len += y;

            cout << len << endl;
        }
        else if (str == "del") {
            cin >> y;

            len -= y;
            cout << arr[idx][0] << endl;
            
            while (y > 0) {
                if (y < arr[idx][1]) {
                    arr[idx][1] -= y;
                    break;
                } else {
                    y -= arr[idx][1];
                    idx--;
                }
            }
        }
        else if (str == "adx") {
            cin >> x;
            for (int i = 0; i <= idx; i++) 
                arr[i][0] += x;
        }
        else if (str == "dex") {
            cin >> x;
            for (int i = 0; i <= idx; i++)
                arr[i][0] -= x;
        }
    }

    return 0;
}