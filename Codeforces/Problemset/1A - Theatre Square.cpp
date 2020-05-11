#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main ()
{
    ll n,m,a,ans;
 	
    cin>>n>>m>>a;
    ans = ((n+a-1)/a)*((m+a-1)/a);
    cout<<ans<<endl; 
 
    return 0;
}
