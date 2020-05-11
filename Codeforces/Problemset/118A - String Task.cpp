#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str="";
	char ch[101];
	int i,length;
	
	scanf("%[^\n]", &ch);
	length = strlen(ch);
	for(i=0; i<length; i++){
		ch[i] = tolower(ch[i]);
	}
	
	for(i=0; i<length; i++){
		if(ch[i]!='a' && ch[i]!='i' && ch[i]!='u' && ch[i]!='e' && ch[i]!='o' && ch[i]!='y'){
			str+=".";
			str+=ch[i];
		}
	}
	cout<<str<<endl;
	
	return 0;
}
