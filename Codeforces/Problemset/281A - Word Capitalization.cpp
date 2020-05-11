#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string ch,str="";
	int i,length;
	
	getline(cin,ch);
	length = ch.length();
	if(isupper(ch[0])){
		for(i=0; i<length; i++){
			str+=ch[i];
		}
	} else {
		ch[0] = toupper(ch[0]);
		str+=ch[0];
		for(i=1; i<length; i++){
			str+=ch[i];
		}
	}
	cout<<str<<endl;
	
	return 0;
}
