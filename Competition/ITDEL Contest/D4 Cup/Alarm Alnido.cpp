#include<stdio.h>

int main(){
	int n, h, m, i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &h, &m);
		if(h==0){
			printf("Case #%d: %d %d\n", i+1, 23, (60-45)+m);
		}
		else if(m<45){
			printf("Case #%d: %d %d\n", i+1, h-1, (60-45)+m);
		}
		else{
			printf("Case #%d: %d %d\n", i+1, h, m-45);
		}
	}
}
