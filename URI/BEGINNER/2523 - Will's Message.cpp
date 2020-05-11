#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string kata, ch;
	int n, i, x;
	
	while(cin>>ch){
		cin>>n;
		for(i=0; i<n; i++){
			cin>>x;
			kata+=ch[x-1];
		}
		cout<<kata<<endl;
		kata="";
	}
	
	return 0;
}
