#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n, P;
	int R,G,B;
	string str;

	cin>>n;
	for(int i=0; i<n; i++){		
		cin>>str;
		cin>>R>>G>>B;
		
		if(str=="min"){
			if(R<=G && R<=B)
				P = R;
			else if(G<=R && G<=B)
				P = G;
			else if(B<=R && B<=G)
				P = B;	
		}
		else if(str=="max"){
			if(R>=G && R>=B)
				P = R;
			else if(G>=R && G>=B)
				P = G;
			else if(B>=R && B>=G)
				P = B;
		}
		else if(str=="mean"){
			P = (R+G+B)/3;
		}
		else if(str=="eye"){
			P=(R*0.30)+(G*0.59)+(B*0.11);
		}
		cout<<"Caso #"<<i+1<<": "<<P<<endl;
	}
	
	return 0;
}
