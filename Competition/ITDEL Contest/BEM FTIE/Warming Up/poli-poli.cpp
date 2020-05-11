#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	int i;
	string kata="";
	
	gets(str);
	for(i=0; i<strlen(str); i++){
		if(str[i] != ' '){
			kata+=str[i];
			cout<<str[i];
		}
		else if(str[i] == ' '){
			for(int j=kata.length()-1; j>=0; j--){
				cout<<kata[j];
			}
			kata = "";
			cout<<" ";
		}
	}
	
	for(int j=kata.length()-1; j>=0; j--){
		cout<<kata[j];
	}
	printf("\n");
	
	return 0;
}
