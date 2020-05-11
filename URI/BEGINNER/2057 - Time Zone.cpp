#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	int sum,min;
	
	cin>>x>>y>>z;
	sum = x+y;
	if(sum>24){
		sum-=24;
	}
	min = sum+z;
	if(min<0){
		min+=24;
	}
	cout<<min<<endl;
	
	return 0;
}
