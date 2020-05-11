#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int MOD = 998244353;

int main(){
    int n;
    string s;

    cin>>n>>s;
    ll l=0, r=0;

    while(l<n && s[l]==s.front()) l++;
    while(r<n && s[n-1-r]==s.back()) r++;

    ll ans=0;

    ans = (s.front()==s.back()) ? (l+1)*(r+1) : l+r+1;

    cout<<ans%MOD<<endl;

    return 0;
}
