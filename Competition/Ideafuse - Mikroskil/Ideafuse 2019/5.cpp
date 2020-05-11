#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t,count=1;
	int n,k,x;
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int>pc,job;
		
		for(int i=0; i<n; i++){
			cin>>x;
			job.push_back(x);
		}
		 
		for(int i=0; i<k; i++){
			pc.push_back(job[i]);
		}
		
		for(int i=k; i<n; i++){				
			int idx = min_element(pc.begin(), pc.end()) - pc.begin();			
			pc[idx] += job[i];
			
		}
		
		auto ans = minmax_element(pc.begin(), pc.end());
		cout<<"Case #"<<count<<": "<<*ans.second<<endl;
		
		count++;
	}

	return 0;
}

