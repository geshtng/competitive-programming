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
	if(n>2){
		for(i=0; i<bagi; i++){
			str+="ga";
			for(j=0; j<i+1; j++){
				str+="n";
			}
			if(str.length()>=n+2 && str.length()<=1000){
				break;
			}
		}
		cout<<str<<"teng"<<endl;
	}
	else{
		cout<<"teng"<<endl;
	}
	return 0;
}
