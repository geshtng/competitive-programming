#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    int b=0, o=0, n=0;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'b') b++;
        else if (str[i] == 'o') o++;
        else if (str[i] == 'n') n++;
    }

    int mins = min(b, (min(o, n)));

    if (mins == 0) printf("0\n");
    else printf("%d\n", mins-1);


    return 0;
}