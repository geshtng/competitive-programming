#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, x, j, z;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x;
		for(j=0; j<x; j++){
			cin>>z;
			if(z==1){
				cout<<"Rolien"<<endl;
			}
			else if(z==2){
				cout<<"Naej"<<endl;
			}
			else if(z==3){
				cout<<"Elehcim"<<endl;
			}
			else if(z==4){
				cout<<"Odranoel"<<endl;
			}
		}
	}
	return 0;
}
