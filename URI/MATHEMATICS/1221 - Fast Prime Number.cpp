#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int i, n, flag=0;
	long x, j;
	cin>>n;
	for(i=0; i<n; i++){
		flag=0;
		cin>>x;
		
		if(x==0){
			cout<<"Not Prime"<<endl;
			continue;
		}
		if(x==1){
			cout<<"Not Prime"<<endl;
			continue;
		}
		if(x==2){
			cout<<"Prime"<<endl;
			continue;
		}
		
		for(j=2; j<sqrt(x)+1; j++){
			if(x%j==0) flag++;
			if(flag==2) break;
		}
		if(flag>=1){
			cout<<"Not Prime"<<endl;
		} else {
			cout<<"Prime"<<endl;
		}
		flag=0;
	}
	
	return 0;
}
