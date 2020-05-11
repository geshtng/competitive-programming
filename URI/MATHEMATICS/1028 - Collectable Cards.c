#include <stdio.h>
int main()
{
    int i, n, a, b;
    int x, y, c;

    scanf("%d", &n);
    for ( i = 0; i < n; ++i)
    {
        scanf("%d%d", &x, &y);
        if(y>x){
            a = y;
            b = x;
        }else{
            a = x;
            b = y;
        }

        while(a % b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        printf("%d\n", b);
    }

    return 0;
}
