#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char ch[101];
	int i,length;
	
	gets(ch);
	length = strlen(ch);
	
	for(i=0; i<length; i++){
		if(ch[i]=='a')
			cout<<"4";
		else if(ch[i]=='i')
			cout<<"1";
		else if(ch[i]=='o')
			cout<<"0";
		else if(ch[i]=='s')
			cout<<"5";
		else if(ch[i]=='e')
			cout<<"3";
		else
			cout<<ch[i];
	}
	cout<<endl;
	
	return 0;
}
