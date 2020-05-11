#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int t,n,length,pos,inx;
	string ch;
	
	cin>>t;
	while(t--){
		cin>>n;
		pos=0;
		int com[n];
		for(int i=0; i<n; i++){
			getchar();
			cin>>ch;
			if(ch=="LEFT"){
				pos--;
				com[i+1] = -1;
			}
			else if(ch=="RIGHT"){
				pos++;
				com[i+1] = 1;
			}
			else{
				scanf(" AS %d", &inx);
				pos+=com[inx];
				com[i+1] = com[inx];
			}
		}
		cout<<pos<<endl;
	}	
	
	return 0;
}
