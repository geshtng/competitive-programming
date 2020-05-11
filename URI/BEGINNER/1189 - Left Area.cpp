#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,x=1,y=5;
	char ch[10];
	double arr[12][12], sum=0.0;
	
	cin>>ch;
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			cin>>arr[i][j];
		}
	}
	
	for(i=1; i<11; i++){
		if(i<=5){
			for(j=0; j<x; j++){
				sum+=arr[i][j];
			}
			x++;
		}
		else if(i>=6){
			for(j=0; j<y; j++){
				sum+=arr[i][j];
			}
			y--;
		}
	}
	
	if(ch[0]=='S'){
		printf("%.1lf\n", sum);
	}
	else if(ch[0]=='M'){
		sum/=30.0;
		printf("%.1lf\n", sum);
	}
	
	return 0;
}
