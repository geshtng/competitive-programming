#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char ch[101];
	int i, j, k;
	string kata="";
	
	while((scanf("%s", ch)) !=EOF){
		kata="";
		kata+=ch;
		for(i=0; i<kata.length(); i++){
			for(j=0; j<i; j++){
				cout<<" ";
			}
			for(j=i, k=0; j<kata.length()-1; j++, k++){
				cout<<kata[k]<<" ";
			}
			cout<<kata[k];
			cout<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
