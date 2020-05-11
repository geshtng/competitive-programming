#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,j1,j2,r,a;
	int sum,res;
	
	cin>>p>>j1>>j2>>r>>a;
	sum = j1+j2;
	
	if((sum%2==0 && p==1) || (sum%2==1 && p==0))
		res=1;
	else
		res=2;
	
	if((r==1 && a==0) || (r==0 && a==1))
		res=1;
	else if(r==1 && a==1)
		res=2;
	
	cout<<"Jogador "<<res<<" ganha!"<<endl;
	
	return 0;
}
