#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,j;
	double arr[12][12], sum=0.0;
	char ch[10];
	
	cin>>x;
	cin>>ch;
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			cin>>arr[i][j];
			if(j==x)
				sum+=arr[i][j];
		}
	}
	
	if(ch[0]=='S'){
		printf("%.1lf\n", sum);
	}
	else if(ch[0]=='M'){
		sum/=12.0;
		printf("%.1lf\n", sum);
	}
	
	return 0;
}
