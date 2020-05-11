#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i,n,x;
	string ch;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>ch;
		cin>>x;
		if(ch=="Thor")
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	
	return 0;
}
