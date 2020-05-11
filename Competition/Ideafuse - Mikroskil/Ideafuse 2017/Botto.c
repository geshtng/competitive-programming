#include<stdio.h>
int main()
{
	int x, y, z;
	int i, j, k;
	scanf("%d %d %d", &x, &y, &z);
	int arr[x];
	for(i=0; i<x; i++){
		scanf("%d", &arr[i]);
	}
	
	for(j=0; j<x; j++){
		for(k=0; k<y; k++){
			if(arr[j]<z){
				arr[j]++;
				printf("left\n");
			}
			else if(arr[j]>z){
				arr[j]--;
				printf("right\n");
			}
		}
		printf("forward\n");
	}
	printf("finish\n");
	
	return 0;
}
