#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b;
        scanf("%d", &b);
        if(b<2015)
        {
            a = 2015 - b;
            printf("%d D.C.\n", a);
        }
        else
        {
            a = b - 2014;
            printf("%d A.C.\n", a);
        }
    }
    return 0;
}
