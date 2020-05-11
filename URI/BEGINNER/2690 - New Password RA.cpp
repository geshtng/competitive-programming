#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n,len;
	string str;
	
	cin>>n;
	getline(cin,str);
	while(n--){
		getline(cin,str);
		len = str.length();
		int c=0;
		string s="";
		
		for(int i=0; i<len; i++){
			if(c==12) break;
			
			if(str[i]!=' '){
				c++;
				s+=str[i];
			}
		}
		
		for(int i=0; i<s.length(); i++){
			if(s[i]=='a' || s[i]=='k' || s[i]=='u' || s[i]=='G' || s[i]=='Q')
				cout<<"0";
			else if(s[i]=='b' || s[i]=='l' || s[i]=='v' || s[i]=='I' || s[i]=='S')
				cout<<"1";
			else if(s[i]=='c' || s[i]=='m' || s[i]=='w' || s[i]=='E' || s[i]=='O' || s[i]=='Y')
				cout<<"2";
			else if(s[i]=='d' || s[i]=='n' || s[i]=='x' || s[i]=='F' || s[i]=='P' || s[i]=='Z')
				cout<<"3";
			else if(s[i]=='e' || s[i]=='o' || s[i]=='y' || s[i]=='J' || s[i]=='T')
				cout<<"4";
			else if(s[i]=='f' || s[i]=='p' || s[i]=='z' || s[i]=='D' || s[i]=='N' || s[i]=='X')
				cout<<"5";
			else if(s[i]=='g' || s[i]=='q' || s[i]=='A' || s[i]=='K' || s[i]=='U')
				cout<<"6";
			else if(s[i]=='h' || s[i]=='r' || s[i]=='C' || s[i]=='M' || s[i]=='W')
				cout<<"7";
			else if(s[i]=='i' || s[i]=='s' || s[i]=='B' || s[i]=='L' || s[i]=='V')
				cout<<"8";
			else if(s[i]=='j' || s[i]=='t' || s[i]=='H' || s[i]=='R')
				cout<<"9";
		}
		cout<<endl;
	}
	
	
	return 0;
}
