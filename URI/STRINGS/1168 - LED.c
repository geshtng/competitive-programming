#include<stdio.h>
#include<string.h>

int main()
{
	int n, i, j,sum=0;
	char ch[100];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", &ch);
		for(i=0, sum=0; i<strlen(ch); i++)
		{
			if(ch[i] == '1')
			{
				sum+=2;	
			}
			else if(ch[i] == '2')
			{
				sum+=5;
			}
			else if(ch[i] == '3')
			{
				sum+=5;
			}
			else if(ch[i] == '4')
			{
				sum+=4;
			}
			else if(ch[i] == '5')
			{
				sum+=5;
			}
			else if(ch[i] == '6')
			{
				sum+=6;
			}
			else if(ch[i] == '7')
			{
				sum+=3;
			}
			else if(ch[i] == '8')
			{
				sum+=7;
			}
			else if(ch[i] == '9')
			{
				sum+=6;
			}
			else if(ch[i] == '0')
			{
				sum+=6;
			}
		}
		printf("%d leds\n", sum);
	}
	
	return 0;
}
