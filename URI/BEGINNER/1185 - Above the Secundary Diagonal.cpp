#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,x=11;
	char ch[10];
	double arr[12][12], sum=0.0;
	
	cin>>ch;
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			cin>>arr[i][j];
		}
	}
	
	for(i=0; i<12; i++){
		for(j=0; j<x; j++){
			sum+=arr[i][j];
		}
		x--;
	}
	
	if(ch[0]=='S'){
		printf("%.1lf\n", sum);
	}
	else if(ch[0]=='M'){
		sum/=66.0;
		printf("%.1lf\n", sum);
	}
	
	return 0;
}
