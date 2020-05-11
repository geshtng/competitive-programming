#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int y,b,r;
	int l,m,n;
	int ans;
	
	cin>>y>>b>>r;
	
	l = y;
	m = b;
	n = r;
	
	int mins = min(min(y,b),r);
	
	if(mins==r){
		ans = r + (r-1) + (r-2);
	}
	else if(mins==b){
		y = b-1;
		r = b+1;
		
		ans = y + b + r;
	}
	else if(mins==y){
		b = y+1;
		r = y+2;
		
		if(r>n){
			y--;
			ans = y + (y+1) + (y+2);
		} else {
			ans = y + b + r;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

