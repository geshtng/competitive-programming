#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int a,b,k,x;

int func(int x){
	if(k>1){
		k--;
		return func(func(x));
	} else {
		return (abs)((a*x)+b);
	}
}

int main(){
	cin>>a>>b>>k>>x;
	cout<<func(x)<<endl;

	return 0;
}

