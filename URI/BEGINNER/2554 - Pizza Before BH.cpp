#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n,d,sum;
	int dd,mm,yy, tdd,tmm,tyy;
	bool test;
	
	while(scanf("%d %d", &n, &d) !=EOF){
		int arr[n];
		test = false;
		tdd=99;
		tmm=99;
		tyy=9999;
		for(i=0; i<d; i++){
			scanf("%d/%d/%d", &dd, &mm, &yy);
			sum=0;
			for(j=0; j<n; j++){
				cin>>arr[j];
				if(arr[j]==1){
					sum++;
				}
			}
			if(sum==n){
				if(dd<tdd && mm<tmm && yy<tyy){
					test=true;
					tdd = dd;
					tmm = mm;
					tyy = yy;
				}
			}
		}
		if(test){
			cout<<tdd<<"/"<<tmm<<"/"<<tyy<<endl;
		} else {
			cout<<"Pizza antes de FdI"<<endl;
		}
	}
	
	return 0;
}
