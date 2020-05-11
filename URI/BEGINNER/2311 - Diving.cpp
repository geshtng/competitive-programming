#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n;
	double x,z,min=100.0,max=-10.0,sum=0.0;
	
	cin>>n;
	for(i=0; i<n; i++){
		char ch[101];
		min = 100.0;
		max = -10.0;
		sum = 0.0;
		
		scanf("%s", ch);
		cin>>x;
		for(j=0; j<7; j++){
			cin>>z;
			if(z>max) max = z;
			if(z<min) min = z;
			sum+=z;
		}
		sum -= (min+max);
		sum *= x;
		cout<<ch<<" ";
		printf("%.2lf\n", sum);
	}
	
	return 0;
}
