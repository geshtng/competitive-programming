#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t,x,count=0;
	set<int>st;
	
	cin>>t;
	
	while(t--){
		cin>>x;
		count++;
		st.insert(x);
		
		double ans;
		
		if(count%2==1){
			set<int>::iterator ita = st.begin();
			advance(ita, count/2);
			
			ans = (double)(*ita)*1.0;
		} else {
			set<int>::iterator itb = st.begin();
			set<int>::iterator itc = st.begin();
			
			advance(itb, count/2-1);
			advance(itc, count/2);

			ans = (((*itb)*1.0) + ((*itc)*1.0)) /2.0;
		}
		printf("%.1lf\n", ans);
	}

	return 0;
}

