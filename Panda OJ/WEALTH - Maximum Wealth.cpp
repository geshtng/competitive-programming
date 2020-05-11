#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	unsigned long long int x, temp=0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		if(x>temp){
			temp = x;
		}
	}
	cout<<temp<<endl;
	
	return 0;
}
