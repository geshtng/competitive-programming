#include<bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (a+b+c >= 200){
        if (a < 50 || b < 50 || c < 50)
            printf("Tidak Lolos\n");
        else
            printf("Lolos\n");
    } else
        printf("Tidak Lolos\n");

    return 0;
}