#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n,length,sum;
	string ch;
	
	cin>>n;
	getchar();
	for(int i=0; i<n; i++){
		getline(cin,ch);
		length = ch.length();
		
		sum=0;
		for(int j=0; j<length; j++){
			if(ch[j]=='A' || ch[j]=='I' || ch[j]=='U' || ch[j]=='E' || ch[j]=='O' || ch[j]=='a' || ch[j]=='i' || ch[j]=='u' || ch[j]=='e' || ch[j]=='o'){
				sum++;
			}
		}
		cout<<"Kasus #"<<i+1<<": "<<sum<<endl;
		
	}
	
	return 0;
}
