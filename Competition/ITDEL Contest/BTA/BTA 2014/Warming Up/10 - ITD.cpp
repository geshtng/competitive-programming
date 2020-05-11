#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
typedef unsigned long long int ULL;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppi;
typedef pair<LL,LL>pll;
typedef pair<string,string>pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<string>vs;
typedef vector<char> vc;
typedef vector<int,int> mii;
typedef vector<string,int>vsi;
 
int main(){
	int n;
	
	cin>>n;
	
	if(n==0)cout<<endl;
	else if(n==1)printf("# #\n");
	else{
		for(int i=0;i<1;i++)cout<<"# ";
		for(int i=0;i<n;i++)cout<<"#";cout<<" ";
		for(int i=0;i<(n/2)+1;i++)cout<<"#";cout<<endl;
		
		for(int i=0;i<n-2;i++){
			for(int i=0;i<1;i++)cout<<"#";
				for(int i=0;i<(n/2)+1;i++)cout<<" ";
			for(int i=0;i<1;i++)cout<<"#";
				for(int i=0;i<(n/2)+1;i++)cout<<" ";
			for(int i=0;i<1;i++)cout<<"#";
				for(int i=0;i<(n/2);i++)cout<<" ";
			for(int i=0;i<1;i++)cout<<"#";
			cout<<endl;
		}
		for(int i=0;i<1;i++)cout<<"#";
			for(int i=0;i<(n/2)+1;i++)cout<<" ";
		for(int i=0;i<1;i++)cout<<"#";
			for(int i=0;i<(n/2)+1;i++)cout<<" ";
		for(int i=0;i<(n/2)+1;i++)cout<<"#";cout<<endl;
	}
	
	return 0;
}
