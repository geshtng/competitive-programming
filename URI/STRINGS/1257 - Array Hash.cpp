#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int i,j,n,x,length;
	char ch[1001];
	int sum=0;
	
	cin>>n;
	
	while(n--){
		cin>>x;
		sum=0;
		for(i=0; i<x; i++){
			scanf("%s", ch);
			length = strlen(ch);
			for(j=0; j<length; j++){
				sum+=ch[j]-65;
				sum+=i;
				sum+=j;
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
