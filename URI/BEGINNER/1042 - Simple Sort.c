#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, i;
    scanf("%d %d %d", &a, &b, &c);
    d = a;
    e = b;
    f = c;
    if (d < e)
    {
        i = d;
        d = e;
        e = i;
    }
    if (e < f)
    {
        i = e;
        e = f;
        f = i;
    }
    if (d < e)
    {
        i = d;
        d = e;
        e = i;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",f,e,d,a,b,c);

    return 0;
}
