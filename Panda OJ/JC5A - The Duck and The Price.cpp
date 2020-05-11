#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x, y, j;
	int cost, sum=0;;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x>>y;
		sum=0;
		for(j=0; j<x; j++){
			cin>>cost;
			if(y>=cost){
				sum++;
			}
		}
		cout<<"Case #"<<i+1<<": "<<sum<<endl;
	}
	
	return 0;
}
