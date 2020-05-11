#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
	int temp = x;
	int ret=0;
	
	while(temp>0){
		ret = (ret*10)+(temp%10);
		temp = temp / 10;
	}
	return ret;
}

int main(){
	string a,b;
	char x[101], y[101];
	int a1, b1,c;
	int len;
	
	cin>>a>>b;
	len = a.length();
	for(int i=len-1, j=0; i>=0; i--, j++){
		x[j]=a[i];
	}
	a1 = atoi(x);
	len = b.length();
	for(int i=len-1, j=0; i>=0; i--, j++){
		y[j]=b[i];
	}
	b1 = atoi(y);
	
	c = a1+b1;
	cout<<reverse(c)<<endl;;
	
	return 0;
}
