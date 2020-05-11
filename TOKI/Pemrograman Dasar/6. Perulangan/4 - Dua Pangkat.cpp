#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n,m;
	
	cin>>n;
	m=1;
	while(m<n){
		m*=2;
	}
	if(m==n)
		cout<<"ya"<<endl;
	else
		cout<<"bukan"<<endl;
	
	return 0;
}
