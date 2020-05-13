#include<bits/stdc++.h>
using namespace std;

int main () {
    int k, d;
    char c;

    scanf("%d %c %d", &k, &c, &d);

    if (k % 2 == 1) {
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= k; j++) {
                if (i == 1 || j == 1 || i == k || j == k) {
                    if (j == k) 
                        printf("%d\n", d);
                    else
                        printf("%d", d);
                    
                }
                else if (i == k/2+1 && j == k/2+1)
                    printf("*");
                else
                    printf("%c", c);
            }
        }
    } else {
        for (int i = 1; i <= k; i++)
            for (int j = 1; j <= k; j++) {
                if (i == 1 || j == 1 || i == k || j == k) {
                    if (j == k)
                        printf("%d\n", d);
                    else
                        printf("%d", d);
                    
                }
                else
                    printf("%c", c);
            }
    }

    return 0;
}