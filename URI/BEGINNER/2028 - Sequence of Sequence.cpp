#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, n, sum=0, counter=0;
	while((scanf("%d", &n)) !=EOF){
		sum=1;
		counter++;
		sum +=((n*(n+1))/2);
		if(n==0){
			cout<<"Caso "<<counter<<": "<<sum<<" numero"<<endl;
		} else {
			cout<<"Caso "<<counter<<": "<<sum<<" numeros"<<endl;
		}
			cout<<"0";
			for(i=1; i<=n; i++){
				for(j=1; j<=i; j++){
					cout<<" "<<i;
				}
			}
			cout<<endl<<endl;
	}
	
	return 0;
}
