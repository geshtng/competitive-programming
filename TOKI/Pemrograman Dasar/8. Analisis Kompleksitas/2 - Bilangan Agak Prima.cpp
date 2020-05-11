#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i,x,j;
	int cek;
	
	cin>>n;
	for(i=0; i<n; i++){
		cek = 0;
		cin>>x;
		for(j=2; j<sqrt(x)+1; j++){
			if(x%j==0)
				cek++;
		}
		if(cek>=2)
			cout<<"BUKAN"<<endl;
		else
			cout<<"YA"<<endl;
	}
	
	return 0;
}
