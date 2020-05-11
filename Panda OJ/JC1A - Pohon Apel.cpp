#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, sum=0, j;
	int x, y;
	
	cin>>n;
	for(i=0; i<n; i++){
		sum=1;
		cin>>x>>y;
		if(y>=x){
			cout<<"Kasus #"<<i+1<<": 1"<<endl;
		} else {
			for(j=y; j<x; j+=y){
				sum++;
			}
			cout<<"Kasus #"<<i+1<<": "<<sum<<endl;
		}
	}
	
	return 0;
}
