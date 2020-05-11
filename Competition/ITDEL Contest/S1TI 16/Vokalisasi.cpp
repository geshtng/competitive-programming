#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char ch[100];
	string kata="";
	int n, i, sum=0;
	
	gets(ch);
	cin>>n;
	for(i=0; i<strlen(ch); i++){
		if(ch[i]=='a' || ch[i]=='i' || ch[i]=='u' || ch[i]=='o' || ch[i]=='e'){
			sum++;
			if(sum==n){
				kata+=ch[i]-32;
				cout<<kata<<endl;
				break;
			}
		}
		else if(ch[i]=='A' || ch[i]=='I' || ch[i]=='U' || ch[i]=='O' || ch[i]=='E'){
			sum++;
			if(sum==n){
				kata+=ch[i];
				cout<<kata<<endl;
				break;
			}
		}	
	}
	
	return 0;
}
