#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string ch;
	int len;
	
	getline(cin,ch);
	len = ch.length();
	for(int i=0; i<len; i++){
		if(ch[i]=='a')
			ch[i]='4';
		else if(ch[i]=='i')
			ch[i]='1';
		else if(ch[i]=='o')
			ch[i]='0';
		else if(ch[i]=='s')
			ch[i]='5';
		else if(ch[i]=='e')
			ch[i]='3';
	}
	cout<<ch<<endl;
	
	return 0;
}
