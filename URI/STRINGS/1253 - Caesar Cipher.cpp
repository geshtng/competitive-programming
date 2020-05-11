#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	int i;
	string kata="";
	char ch[100];
	int k, n, x;
	
	cin>>n;
	for(k=0; k<n; k++){	
		kata="";
		scanf("%s", ch);
		scanf("%d", &x);
		
		for(i=0; i<strlen(ch); i++){
			if((ch[i]-x)<65)
			{
				kata +=(ch[i]-x)+26;
			} else {
				kata += ch[i]-x;
			}
		}	
		cout<<kata<<endl;
	}
	return 0;
}
