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
		if(x==0 || x==1){
			cout<<"BUKAN"<<endl;
			continue;
		}
		if(x==2){
			cout<<"YA"<<endl;
			continue;
		}
		for(j=2; j<sqrt(x)+1; j++){
			if(x%j==0)
				cek++;
			if(cek==2)
				break;
		}
		if(cek>=1)
			cout<<"BUKAN"<<endl;
		else
			cout<<"YA"<<endl;
	}
	
	return 0;
}
