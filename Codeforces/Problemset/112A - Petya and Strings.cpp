#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string a,b;
	int sum=0;
		
	getline(cin,a);
	getline(cin,b);
	for(int i=0; i<a.length(); i++){
		if(a[i]<91 && a[i]>64){
			a[i]+=32;
		}
		if(b[i]<91 && b[i]>64){
			b[i]+=32;
		}
	}
	
	if(a.compare(b)==0){
		cout<<"0"<<endl;
	} else {
		for(int i=0; i<a.length(); i++){
			if(a[i]<b[i]){
				cout<<"-1"<<endl;
				break;
			}
			if(a[i]>b[i]){
				cout<<"1"<<endl;
				break;
			}
		}
	}
	
	return 0;
}
