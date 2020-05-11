#include<stdio.h>
int main()
{
	int n, i, c, j;
	int x, y;
	int sum=0, min=0, max=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &c);
		for(j=0; j<c; j++){
			scanf("%d %d", &x, &y);
			if(min==0){
				min+=x;
				sum =+ x+y;
			}
			else{
				if(sum>x){
					sum+=y;
					min+=0;
				}
				else{
					min += x-sum;
					sum = x+y;
				}
			}	
		}
		printf("Case #%d: %d\n", i, min);
		max=0;
		sum=0;
		min=0;
	}
	
	return 0;
}
