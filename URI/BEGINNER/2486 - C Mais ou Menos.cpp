#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i, n, x, sum=0, lmao=0;;
	string ch;
	while((scanf("%d", &n)) !=EOF){
		lmao=sum=0;
		if(n==0){
			break;
		}
		for(i=0; i<n; i++){
			scanf("%d", &x);
			getchar();
			getline(cin,ch);
			if(ch=="suco de laranja"){
				sum = x*120;
			}
			else if(ch=="morango fresco"){
				sum = x*85;
			}
			else if(ch=="mamao"){
				sum = x*85;
			}
			else if(ch=="goiaba vermelha"){
				sum = x*70;
			}
			else if(ch=="manga"){
				sum = x*56;
			}
			else if(ch=="laranja"){
				sum = x*50;
			}
			else if(ch=="brocolis"){
				sum = x*34;
			}
			lmao+=sum;
		}
		
		if(lmao<110){
			cout<<"Mais "<<110-lmao<<" mg"<<endl;
		}
		else if(lmao>130){
			cout<<"Menos "<<lmao-130<<" mg"<<endl;
		}
		else{
			cout<<lmao<<" mg"<<endl;
		}
	}
	
	return 0;
}
