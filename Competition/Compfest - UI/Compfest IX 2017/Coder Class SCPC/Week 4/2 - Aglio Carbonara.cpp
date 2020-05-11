#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	string str="";	
	cin>>n;
	char ch[n];
	getchar();
	scanf("%[^\n]", ch);
	bool a,b;
	a=b=false;
	int j=0,k=n-1;
	for(int i=0; ; i++){
		if(!a){
			if(ch[j]=='a' || ch[j]=='i' || ch[j]=='u' || ch[j]=='e' || ch[j]=='o' || ch[j]=='A' || ch[j]=='I' || ch[j]=='U' || ch[j]=='E' || ch[j]=='O'){
				a = true;
			} else {
				j++;
			}
		}
		if(!b){
			if(ch[k]=='a' || ch[k]=='i' || ch[k]=='u' || ch[k]=='e' || ch[k]=='o' || ch[k]=='A' || ch[k]=='I' || ch[k]=='U' || ch[k]=='E' || ch[k]=='O'){
				b = true;
			} else {
				k--;
			}
		}
		if(a && b){
			str+=ch[j];
			if(j==k){
				break;
			}
			j++;
		}
	}
	cout<<str<<endl;	
	return 0;
}
