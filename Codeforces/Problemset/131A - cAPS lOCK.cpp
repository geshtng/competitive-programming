#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string ch;
	int sum=0;
	
	getline(cin,ch);
	for(int i=0; i<ch.length(); i++){
		if(ch[i]==tolower(ch[i])){
			sum++;
		}
	}
	
	if(sum==0){
		for(int i=0; i<ch.length(); i++){
			ch[i] = tolower(ch[i]);
		}
		cout<<ch<<endl;
	}
	else if(sum==1 && ch[0]==tolower(ch[0])){
		ch[0] = toupper(ch[0]);
		for(int i=1; i<ch.length(); i++){
			ch[i]=tolower(ch[i]);
		}
		cout<<ch<<endl;
	}
	else{
		cout<<ch<<endl;
	}
	
	return 0;
}
