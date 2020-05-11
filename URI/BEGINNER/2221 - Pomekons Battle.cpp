#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,bonus;
	int a1,d1,l1,dabriel;
	int a2,d2,l2,guarte;
	
	cin>>n;
	for(i=0; i<n; i++){
		cin>>bonus;
		cin>>a1>>d1>>l1;
		cin>>a2>>d2>>l2;
		
		dabriel = (a1+d1)/2;
		guarte = (a2+d2)/2;
		
		if(l1%2==0)
			dabriel+=bonus;
		
		if(l2%2==0)
			guarte+=bonus;
		
		if(dabriel==guarte)
			cout<<"Empate"<<endl;
		else
			printf((dabriel>guarte)?"Dabriel\n" : "Guarte\n");
		
	}
	
	return 0;
}
