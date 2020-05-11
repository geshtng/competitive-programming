#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	int i,j;
	
	cin>>x>>y;
	for(i=1; i<x; i++){
		if(i%y==0)
			cout<<"* ";
		else
			cout<<i<<" ";
	}
	if(i%y==0)
		cout<<"*"<<endl;
	else
		cout<<i<<endl;
	
	return 0;
}
