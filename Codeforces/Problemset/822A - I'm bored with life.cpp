#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int a,b,mins;
	ll ans=1;
	
	cin>>a>>b;
	mins = min(a,b);
	for(int i=1; i<=mins; i++)
		ans*=i;
	
	cout<<ans<<endl;
	
	return 0;
}
