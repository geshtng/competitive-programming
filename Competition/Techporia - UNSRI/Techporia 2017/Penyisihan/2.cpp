#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,tot,min,vol,sum,a,b;
	char ch[5];
	
	cin>>t;
	while(t--){
		cin>>n>>q;
		int arr[n];
		
		tot=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			tot+=arr[i];
		}
		if(arr[0] < arr[n-1])
			min = arr[0];
		else
			min = arr[n-1];
		
		sum = (2*n)+min;
		vol = sum-tot;
		for(int i=0; i<q; i++){
			cin>>ch;
			if(ch[0]=='U'){
				cin>>a>>b;
				arr[a-1]+=b;
				
				tot=0;
				for(int j=0; j<n; j++){
					tot+=arr[j];
				}

				if(arr[0]<arr[n-1])
					min = arr[0];
				else
					min = arr[n-1];
									
				sum = (2*n)+min;
				vol = sum-tot;
			}
			else if(ch[0]=='P'){
				cout<<vol<<endl;
			}
		}
	}

	return 0;
}

