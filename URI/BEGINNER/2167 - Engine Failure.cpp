#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,min=0,counter=0,sum=0;
	bool test=true;
	
	cin>>n;
	while(n--){
		cin>>x;
		counter++;
		if(x<min && test){
			sum = counter;
			test=false;
		}
		min = x;
	}
	cout<<sum<<endl;
	
	return 0;
}
