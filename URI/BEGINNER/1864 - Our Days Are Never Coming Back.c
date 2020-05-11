//LIFE IS NOT A PROBLEM TO BE SOLVED
#include<stdio.h>
int main()
{
	char array[35]={' ','L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
	int i, n=0;
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
	printf("%c", array[i]);
	}
	printf("%c\n", array[i]);
	return 0;
}
