#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    string a, b;

    scanf("%d", &n);
    cin >> a >> b;

    int ans = 0;
    for (char i = 'a'; i <= 'z'; i++) {
        int temp = 0;
        for(int j = 0; j < n; j++) 
            if (a[j] == i || b[j] == i)
                temp++;

        ans = max(ans, temp);
    }

    printf("%d\n", ans);

    return 0;
}