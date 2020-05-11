#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;
	int i, x, y, z;

   	scanf("%d", &n);
	
	for(i=1; i<=n ;i++)
	{
		scanf("%d %d", &y, &z);
		x = y*z;
    	while(x != 0)
    	{
    	    remainder = x % 10;
    	    reversedNumber = reversedNumber*10 + remainder;
    	    x /= 10;
    	}
    	if(y==reversedNumber)
    	{
    		printf("V\n");
    	}
    	else
    	{
    		printf("X\n");
		}
		reversedNumber=0;
	}

    

    return 0;
}
