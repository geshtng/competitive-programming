#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int n, i, j, bagi;
	string str="";
	scanf("%d", &n);
	if(n%2==0){
		bagi=n/3;
	} else {
		bagi=(n/4)+1;
	}
		
	for(i=0; i<bagi; i++){
		str+="mb";
		for(j=0; j<i+1; j++){
			str+="e";
		}
		if(str.length()>=n){
			break;
		}
	}
	cout<<str<<endl;

	return 0;
}
