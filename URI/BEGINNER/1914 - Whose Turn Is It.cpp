#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i,n;
	long long int x,y,sum=0;
	char A[101], B[101], X[10], Y[10];
	cin>>n;
	for(i=0; i<n; i++){
		getchar();
		scanf("%s %s %s %s", A,X,B,Y);
		cin>>x>>y;
		sum=x+y;
		if(X[0]=='P'){
			if(sum%2==0)
				cout<<A<<endl;
			else
				cout<<B<<endl;
		} else {
			if(sum%2==0)
				cout<<B<<endl;
			else
				cout<<A<<endl;
		}
	}
	
	return 0;
}
