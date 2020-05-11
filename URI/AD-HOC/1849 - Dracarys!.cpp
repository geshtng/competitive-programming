#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int a,b,c,d;
	
	cin>>a>>b>>c>>d;
	
	int x = min(a,b);
	int y = min(c,d);
	
	x += y;
	int z = min(max(a,b), max(c,d));
	int ans = min(x,z);
	
	cout<<ans*ans<<endl;
	
	return 0;
}

