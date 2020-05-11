#include <stdio.h>
int main()
{
    int i, n;
    double total;

    scanf("%d %d", &i, &n);

    if(i==1)
    {
        total=4.00*n;
        printf("Total: R$ %.2lf\n", total);
    }
    if(i==2)
    {
        total=4.50*n;
        printf("Total: R$ %.2lf\n", total);
    }
    if(i==3)
    {
        total=5.00*n;
        printf("Total: R$ %.2lf\n", total);
    }
    if(i==4)
    {
        total=2.00*n;
        printf("Total: R$ %.2lf\n", total);
    }
    if(i==5)
    {
        total=1.50*n;
        printf("Total: R$ %.2lf\n", total);
    }

    return 0;
}
