#include<stdio.h>
int main()
{
	int a,N;
	scanf("%d", &N);
	for(a=1;a<10000;a++)
		{
			if(a%N==2)
			{
            	printf("%d\n",a);
        	}
    	}     
 
system("pause");
}
		

