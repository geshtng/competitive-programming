#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t,n;
	int a,b;
	
	cin>>t;
	for(int it=0; it<t; it++){
		cin>>n;
		
		int xMin=INT_MAX, xMax=INT_MIN;
		int yMin=INT_MAX, yMax=INT_MIN;
		int hue, x,y;
		ll ans;
		
		for(int i=0; i<n; i++){
			cin>>a>>b;
			if(a<xMin)
				xMin = a;
			if(a>xMax)
				xMax = a;
			if(b<yMin)
				yMin = b;
			if(b>yMax)
				yMax = b;
		}
		x = xMax - xMin;
		y = yMax - yMin;
		hue = max(x,y);
		
		ans = hue*hue;
		printf("Case #%d: ", it+1);
		cout<<ans<<endl;
	}

	return 0;
}

