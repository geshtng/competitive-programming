#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x, j;
	int sco, sum=0;;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		sum=0;
		for(j=0; j<x; j++){
			cin>>sco;
			if(sco>=0){
				sum+=sco;
			}
		}
		cout<<"Kasus #"<<i+1<<": "<<sum<<endl;
	}
	
	return 0;
}
