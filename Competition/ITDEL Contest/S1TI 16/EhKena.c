#include <stdio.h>

int main()
{
	int X1, X2, X3, X4, Y1, Y2, Y3, Y4;
	
	scanf("%d,%d,%d,%d", &X1, &Y1, &X2, &Y2);
	scanf("%d,%d,%d,%d", &X3, &Y3, &X4, &Y4);
	
	swap(X1,X2);
	swap(X3,X4);
	swap(Y1,Y2);
	swap(Y3,Y4);
	
	if(cek(X1, X2, X3, X4, Y1, Y2, Y3, Y4)) 
       printf("YA");
    else
       printf("TIDAK");
	   	
	return 0;
}

int cek(int X1, int X2, int X3, int X4, int Y1, int Y2, int Y3, int Y4)
{
	int i;
	for (i=X1;i<=X2;i++)
	{
		if (i==X3||i==X4)
			return 1;
	}
	
	for (i=X3;i<=X4;i++)
	{
		if (i==X1||i==X2)
			return 1;
	}
	
	for (i=Y1;i<=Y2;i++)
	{
		if (i==Y3||i==Y4)
			return 1;
	}
	
	for (i=Y3;i<=Y4;i++)
	{
		if (i==Y1||i==Y2)
			return 1;
	}
	return 0;
}

int swap (int a, int b)
{
	int t;
	if (a > b)
		t = b;
		b = a;
		a = t;
	return 0;
}
