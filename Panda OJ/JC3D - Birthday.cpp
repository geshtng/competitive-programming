#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x, y, j;
	int temp=0, cst, cmp=0;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x>>y;
		temp=0;
		cmp=0;
		for(j=0; j<x; j++){
			cin>>cst;
			if(cst<=y){
				if(cst>temp){
					temp=cst;
				}
				continue;
			} else {
				cmp++;
			}
		}
		if(cmp==x){
			cout<<"Case #"<<i+1<<": HAPPY BIRTHDAY ANTONIO"<<endl;
		} else {
			cout<<"Case #"<<i+1<<": "<<temp<<endl;
		}
	}
	
	return 0;
}
