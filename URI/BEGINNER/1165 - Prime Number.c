#include <stdio.h>
int main()
{
    int n, i, flag = 0;
	int x, j;
	
    scanf("%d", &x);
    for(j=1; j<=x; j++)
    {
    	scanf("%d",&n);
	
	    for(i=2; i<=n-1; i++)
	    {
	        if(n%i==0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if (flag==0)
	    {
        	printf("%d eh primo\n", n);
    	}
		else
		{
        	printf("%d nao eh primo\n", n);
    	}
    	flag=0;
	}

    
    return 0;
}
