#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int i,j,k,n;
	char a[1001], b[1001];
	int l1,l2;
	
	cin>>n;
	for(i=0; i<n; i++){
		getchar();
		scanf("%s %s", a, b);
		l1 = strlen(a);
		l2 = strlen(b);
		
		int sum=0;
		for(j=l2, k=l1; j>=0; j--, k--){
			if(a[k]==b[j]){
				sum++;
			} else {
				break;
			}
		}
		
		if(sum==l2+1){
			cout<<"encaixa"<<endl;
		} else {
			cout<<"nao encaixa"<<endl;
		}
		
	}
	
	return 0;
}
