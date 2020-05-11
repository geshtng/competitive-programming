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

struct compare{
	bool operator()(const string& first, const string& second){
		return first.size() <= second.size();
	}
};

int main(){
	int t;
	string str;
	string vec[101];
	compare c;
	
	cin>>t;
	getchar();
	while(t--){
		getline(cin,str);
		int i=0,j=0,x=0;
		string hue;
		while(i <= str.size()){
			if(str[i] == ' ' || str[i]=='\0'){
				hue = str.substr(j, i-j);
				vec[x] = hue;
				j = i+1;
				x++;
			}
			i++;
		}
		
		stable_sort(vec, vec+x, c);
		reverse(vec, vec+x);
		
		for(int it=0; it<x; it++){
			(it == x-1) ? cout<<vec[it]<<endl : cout<<vec[it]<<" ";
		}
	}

	return 0;
}

