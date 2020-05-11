#include<bits/stdc++.h>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int n, length, j, mod;
	string kata="", ch;
	//char ch[101];
	
	cin>>n;
	getchar();
	for(int i=0; i<n; i++){
		//scanf("%s", ch);
		getline(cin, ch);
		kata="";
		length = ch.length();
		mod = length/2;
		for(j=mod-1; j>=0; j--){
			kata+=ch[j];
		}
		for(j=length-1; j>=mod; j--){
			kata+=ch[j];
		}
		cout<<kata<<endl;
	}
	
	return 0;
}
