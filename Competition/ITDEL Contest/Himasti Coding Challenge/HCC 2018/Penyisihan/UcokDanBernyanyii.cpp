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
	string str;
	vector<string>vec;
	string lagu[14] = {"Selamat", "ulang", "tahun,", "selamat", "ulang", "tahun,", "selamat", "ulang", "tahun",
		"untuk", "Ucok,", "selamat", "ulang", "tahun ..."
	};
	
	cin>>t;
	x=t;
	while(t--){
		cin>>str;
		vec.pb(str);
	}
	
	
	if(x<=14){
		int k=0;
		for(int i=0; i<14; i++){
			if(k==vec.size()){
				k=0;
			}
			cout<<vec[k]<<":"<<lagu[i]<<endl;
			k++;
		}
	} else {
		int k=0, i=0;
		for(i=0; i<vec.size(); i++){
			if(k==14){
				k=0;
			}
			cout<<vec[i]<<":"<<lagu[k]<<endl;
			k++;
		}
		int hue=0;
		for(int x=k; x<14; x++){
			cout<<vec[hue]<<":"<<lagu[x]<<endl;
			hue++;
		}
	}
	

	return 0;
}

