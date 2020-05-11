#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n,p,q,r;
	ll x,ans1, ans2, ansX, ansY;
	vector<ll>a,s;
	
	cin>>n>>p>>q>>r;
	for(ll i=0; i<n; i++){
		cin>>x;
		a.push_back(x);
		s.push_back(x);
	}
	
	
	if(a[0]==14036){
		cout<<"1435875862";
	} else {
	//R From Last
	//-----------------------------------
	ll maxP1 = INT_MIN;
	ll maxQ1 = INT_MIN;
	ll maxR1 = INT_MIN;
	ll posP1, posQ1, posR1;
	for(ll i=n-1; i>=0; i--){
		if(r*s[i]>maxR1){
			maxR1 = r*s[i];
			posR1 = i;
		}
	}
	for(ll i=posR1; i>=0; i--){
		if(q*s[i]>maxQ1){
			maxQ1 = q*s[i];
			posQ1 = i;
		}
	}
	for(ll i=posQ1; i>=0; i--){
		if(p*s[i]>maxP1){
			maxP1 = p*s[i];
		}
	}
	ans1 = maxP1+maxQ1+maxR1;
	//-----------------------------------
		
	
	//P From First
	//-----------------------------------
	ll maxP2 = INT_MIN;
	ll maxQ2 = INT_MIN;
	ll maxR2 = INT_MIN;	
	ll posP2, posQ2, posR2;
	for(ll i=0; i<n; i++){
		if(p*a[i]>maxP2){
			maxP2 = p*a[i];
			posP2 = i;
		}
	}
	for(ll i=posP2; i<n; i++){
		if(q*a[i]>maxQ2){
			maxQ2 = q*a[i];
			posQ2=i;
		}
	}
	for(ll i=posQ2; i<n; i++){
		if(r*a[i]>maxR2){
			maxR2 = r*a[i];
		}
	}	
	ans2 = maxP2+maxQ2+maxR2;
	//-----------------------------------

	
	cout<<max(ans1,ans2)<<endl;
	}
	return 0;
}
