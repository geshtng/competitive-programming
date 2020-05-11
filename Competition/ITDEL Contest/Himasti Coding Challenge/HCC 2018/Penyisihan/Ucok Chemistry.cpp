#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t;
	string str;
	int ans;
	
	cin>>t;
	
	int temp[t];
	getchar();
	
	for(int it=0; it<t; it++){
		ans=0;
		cin>>str;
		for(int i=0; i<str.size(); i++){
			if(str[i]=='A' || str[i]=='a') ans+=0;
			else if(str[i]=='B' || str[i]=='b') ans+=1;
			else if(str[i]=='C' || str[i]=='c') ans+=2;
			else if(str[i]=='D' || str[i]=='d') ans+=3;
			else if(str[i]=='E' || str[i]=='e') ans+=4;
			else if(str[i]=='F' || str[i]=='f') ans+=5;
			else if(str[i]=='G' || str[i]=='g') ans+=6;
			else if(str[i]=='H' || str[i]=='h') ans+=7;
			else if(str[i]=='I' || str[i]=='i') ans+=8;
			else if(str[i]=='J' || str[i]=='j') ans+=9;
			else if(str[i]=='K' || str[i]=='k') ans+=10;
			else if(str[i]=='L' || str[i]=='l') ans+=11;
			else if(str[i]=='M' || str[i]=='m') ans+=12;
			else if(str[i]=='N' || str[i]=='n') ans+=13;
			else if(str[i]=='O' || str[i]=='o') ans+=14;
			else if(str[i]=='P' || str[i]=='p') ans+=15;
			else if(str[i]=='Q' || str[i]=='q') ans+=16;
			else if(str[i]=='R' || str[i]=='r') ans+=17;
			else if(str[i]=='S' || str[i]=='s') ans+=18;
			else if(str[i]=='T' || str[i]=='t') ans+=19;
			else if(str[i]=='U' || str[i]=='u') ans+=20;
			else if(str[i]=='V' || str[i]=='v') ans+=21;
			else if(str[i]=='W' || str[i]=='w') ans+=22;
			else if(str[i]=='X' || str[i]=='x') ans+=23;
			else if(str[i]=='Y' || str[i]=='y') ans+=24;
			else if(str[i]=='Z' || str[i]=='z') ans+=25;
		}
		temp[it] = ans;
	}
	
	for(int i=0; i<t; i++){
		cout<<temp[i]<<endl;
	}

	return 0;
}

