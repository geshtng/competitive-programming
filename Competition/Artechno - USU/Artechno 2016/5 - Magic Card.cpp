#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n, sum;
	char ch[6];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>ch;
		sum = 0; 
		for(int j=0; j<strlen(ch); j++){
			if(ch[j]=='Y'){
				sum+=pow(2,j);
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
