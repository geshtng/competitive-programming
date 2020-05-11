#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, la, lb, sa, sb;
	
	cin>>n;
	cin>>la>>lb;
	cin>>sa>>sb;
	
	if(n>lb || n>sb || n<la || n<sa)
		cout<<"impossivel"<<endl;
	else
		cout<<"possivel"<<endl;
	
	return 0;
}
