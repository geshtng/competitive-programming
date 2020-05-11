#include <stdio.h>
 
int main(int argc, char **argv)
{
    int c, t, x, y;
 
    scanf("%d\n", &t);
    while(t--)
    {
        while((c = getchar()) != ' ')
            x = c;
        while((c = getchar()) != '\n' && c != EOF)
            y = c;
        while((c = getchar()) != ' ')
            x -= c;
        while((c = getchar()) != '\n' && c != EOF)
            y -= c;
 
        if(x % 2)
            if(y % 2)
                printf("NO\n");
            else
                printf("YES\n");
        else
            if(y % 2)
                printf("YES\n");
            else
                printf("NO\n");
    }
 
    return 0;
}
