#include<stdio.h>
int main()
{
	float array[100];
	int i;
	for(i=1; i<=100; i++)
	{
		scanf("%f", &array[i]);
	}
	
	for(i=1; i<=100; i++)
	{
		if(array[i] <= 10)
		{
			printf("A[%d] = %.1f\n", i-1, array[i]);
		}
	}
	
	return 0;
}
