#include<stdio.h>
int main()
{
	char L[600];
    gets(L);
    printf((strlen(L)>80)?"NO\n":"YES\n");
	
	return 0;
}
