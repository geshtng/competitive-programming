#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i, n, length;
	char ch[21];
	string kata="";
	
	cin>>n;
	for(i=0; i<n; i++){
		scanf("%s", ch);
		length = strlen(ch);
		
		if(length>3){
			cout<<ch;
		} else {
			if(ch[0]=='O' && ch[1]=='B'){
				cout<<"OBI";
			}
			else if(ch[0]=='U' && ch[1]=='R'){
				cout<<"URI";
			}
			else{
				cout<<ch;
			}
		}
		if(i != (n-1)){
			cout<<" ";
		}
	}
	cout<<endl;
	
	return 0;
}
