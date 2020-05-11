#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	vector<int>axe;
	
	for(i=0; i<n; i++){
		cin>>arr[i];
	}	
	
	int mins = INT_MAX;
	for(i=0; i<n; i++){
		if(arr[i]<mins)
			mins = arr[i];
	}
	int j, ans=INT_MAX, sum;
	int l=0;
	for(i=0; i<n; i++){
		j=i;	
		sum = 0;
		if(arr[i]==mins){
			for(int k=j+1; k<n; k++, i++){
				sum++;
				if(arr[k]==mins)
					break;
			}
		//	cout<<"# "<<sum<<endl;
			if(sum<ans)
				ans = sum;
				
			axe.push_back(ans);
		}
	}
	int x = axe.size();
	sort(axe.begin(),axe.begin()+x);
	cout<<axe[1]<<endl;
	
	
	return 0;
}
