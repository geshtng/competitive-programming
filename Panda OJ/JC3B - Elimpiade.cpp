#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, div;
	int a,b,c,d,e;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>a>>b>>c>>d>>e;
		div=1;
		while(1){
			if(div%a==0 && div%b==0 && div%c==0 && div%d==0 && div%e==0){
				break;
			} else {
				div++;
			}
		}
		cout<<"Case #"<<i+1<<": "<<2000+div<<endl;
	}
	
	return 0;
}
