#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int x,y, a, b;
	int i;
	unsigned long long int factX, factY, sum=0;;
	
	while((scanf("%d %d", &x, &y)) !=EOF){
		factX=1;
		factY=1;
		sum=0;
		
		a=x;
		if(a!=0){
			for(i=1; i<=a; i++){
				factX*=i;
			}
		} else {
			factX=1;
		}
		
		b=y;
		if(b!=0){
			for(i=1; i<=y; i++){
				factY*=i;
			}
		} else {
			factY=1;
		}

		sum = factX + factY;
		cout<<sum<<endl;
	}
	
	return 0;
}
