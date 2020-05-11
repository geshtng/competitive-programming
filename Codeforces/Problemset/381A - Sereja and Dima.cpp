#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e5 + 5;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	vector<int>vec;
	
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		vec.push_back(x);
	}
	
	int left=0, right=n-1;
	int t=0;
	int a=0, b=0;
	
	while(left < right+1){
		t++;
		if(vec[left] > vec[right]){
			if(t%2==1){
				a += vec[left];	
			} else {
				b += vec[left];
			}
			left++;
		} else {
			if(t%2==1){
				a += vec[right];
			} else {
				b += vec[right];
			}
			right--;
		}
	}
	
	cout<<a<<" "<<b<<endl;
	

	return 0;
}

