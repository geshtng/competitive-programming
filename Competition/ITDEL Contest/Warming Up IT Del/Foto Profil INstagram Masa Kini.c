#include<stdio.h>
int main()
{
	int l, n, w, h, i;
	scanf("%d", &l);
	scanf("%d", &n);
	for(i=1; i<=n ;i++)
	{
		scanf("%d %d", &w, &h);
		if(w==0 || h==0)
		{
			printf("CORRUPT\n");
		}
		else if(w<l || h<l)
		{
			printf("UPLOAD ANOTHER\n");
		}
		else if(w>l || h>l)
		{
			if(w==h)
			{
				printf("ACCEPTED\n");
			}
			else
			{
				printf("CROP IT\n");
			}
		}
		else
		{
			printf("ACCEPTED\n");
		}
	}
	
	return 0;
}
