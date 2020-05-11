#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int i,j=0,length;
	char ch[51], chn[51];
	bool test=false;
	
	scanf("%s", ch);
	for(i=0; ch[i]; i++){
		if(ch[i]=='a' || ch[i]=='i' || ch[i]=='u' || ch[i]=='e' || ch[i]=='o'){
			chn[j] = ch[i];
			j++;
		}
	}
	
	chn[j]='\0';
	length = strlen(chn);
	for(i=0, j=length-1; i<length; i++, j--){
		if(chn[i] != chn[j]){
			test = true;
			break;
		}
	}
	
	if(test)
		cout<<"N"<<endl;
	else
		cout<<"S"<<endl;
	
	return 0;
}
