#include<stdio.h>
int main()
{
	int a,b,c,d=0,e=1;
    scanf("%d", &a);
    int array[a];
    for(b=0; b<a; b++)
        scanf("%d", &array[b]);
    c=array[d];
    for(d=0; d<a; d++)
    {
        if(array[d]<c)
        {
            c=array[d];
            e=d+1;
        }

    }
    printf("%d\n", e);
    return 0;
}
