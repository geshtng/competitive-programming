#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ch[100];
	int i, j, n, length;
	int flag=0;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>ch;
		length=strlen(ch);
		
		for(j=0; j<length-1; j++){
			if(ch[j]>64 && ch[j]<91){
				ch[j] = ch[j]+32;
			}
		}
		for(j=0; j<length; j++){
			if(ch[j] != ch[length-j-1]){
				flag = 1;
				break;
			}
		}
		if(flag==1){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
		flag = 0;
	}
	
	return 0;
}
