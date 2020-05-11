#include<stdio.h>
int main()
{
	int array[10];
	int i;
	for(i=1; i<=10; i++)
	{
		scanf("%d", &array[i]);
		if(array[i]==0 || array[i]<0)
		{
			array[i] = 1;
		}
	}
	
	for(i=1; i<=10; i++)
	{
		printf("X[%d] = %d\n", i-1, array[i]);
	}
	
	return 0;
}
