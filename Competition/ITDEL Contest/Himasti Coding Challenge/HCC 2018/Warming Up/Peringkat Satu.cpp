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
	int t,x;
	string str, hue;
	double max=0.0, a,b,c;
	
	cin>>t;
	x = t;
	getchar();
	while(t--){
		cin>>str;
		cin>>a>>b>>c;
		
		double mean;
		mean = (a*2.0 + b*3.0 + c*5.0) / (x*1.0);
		//cout<<"Mean: "<<mean<<endl;
		
		if(mean > max){
			max = mean;
			hue = str;
		}
	}
//	cout<<max<<endl;
	cout<<hue<<endl;

	return 0;
}

