#include<bits/stdc++.h>
using namespace std;

void generate(int n){
	if(n==1)
		cout<<"*"<<endl;
	else{
		generate(n-1);
		for(int i=0; i<n; i++)
			cout<<"*";
		cout<<endl;
		generate(n-1);
	}
}

int main(){
	int n;
	cin>>n;
	generate(n);
	
	return 0;
}
