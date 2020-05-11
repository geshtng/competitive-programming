#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int i, n, j;
	char ch[100];
	string kata="";
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%s", ch);
		for(j=0; j<strlen(ch); j++){
			if(j%2==0){
				kata += ch[j]-32;
			} else {
				kata += ch[j];
			}
		}
		cout<<kata<<endl;
		kata="";
	}
	
	return 0;
}
