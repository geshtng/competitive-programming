#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, max=0;
	bool test = false;
	
	while(cin>>n){
		if(n>max && !test)
			max = n;
		else 
			test = true;	
	}
	cout<<max+1<<endl;
	
	return 0;
}
