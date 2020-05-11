#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k=0, sum=0;
	char ch[256][256];
	string str;
	
	
	cin>>n;
	cin>>str;
	
	for(int i=0; i<str.length()/n; i++){
		for(int j=0; j<n; j++){
			ch[i][j] = str[k];
			k++;
		}
	}
	
	for(int i=0; i<str.length()/n; i++){
		for(int j=0; j<n; j++){
			if(ch[i][j]==ch[i][j+1] && ch[i][j+1]==ch[i+1][j] && ch[i+1][j]==ch[i+1][j+1]){
				sum++;
			}
		}
	}
	
	cout<<sum<<endl;
	
	return 0;
}

