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

bool isPrime(int n){
	if(n<=1)
		return false;
	int i = 2;
	while(i*i <= n){
		if(n%i==0)
			return false;
		i++;
	}
	return true;
}

int main(){
	int n;
	
	while(cin>>n){
		bool hue = false;
		if(isPrime(n)){
			string a;
			ostringstream temp;
			temp<<n;
			a = temp.str();
			
			for(int i=0; i<a.size(); i++){
				int t = a[i] - '0';
				if(!isPrime(t)){
					hue = true;
					break;
				}
			}
			
			if(hue)
				cout<<"Primo"<<endl;
			else
				cout<<"Super"<<endl;
			
			a.clear();
		} else {
			cout<<"Nada"<<endl;
		}
	}

	return 0;
}

