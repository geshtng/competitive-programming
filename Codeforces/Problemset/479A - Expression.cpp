#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	int a1,a2,a3,a4,a5;
	int ans;
	
	cin>>a>>b>>c;
	
	a1 = a+b*c;
	a2 = a*(b+c);
	a3 = a*b*c;
	a4 = (a+b)*c;
	a5 = a+b+c;
	
	ans = max(max(a1,a2), max(max(a3,a4),a5));
	cout<<ans<<endl;
	
	return 0;
}
