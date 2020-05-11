#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	char ch[10000];
	int a,b,c,x,y,z;
	double sumA=0.0,sumB=0.0,sumC=0.0;
	double sumX=0.0,sumY=0.0,sumZ=0.0;
	double a1,b1,c1;
	
	cin>>n;
	for(i=0; i<n; i++){
		scanf("%s", ch);
		cin>>a>>b>>c;
		cin>>x>>y>>z;
		sumA+=a; sumB+=b; sumC+=c;
		sumX+=x; sumY+=y; sumZ+=z;
	}
	a1 = (sumX/sumA)*100.00;
	b1 = (sumY/sumB)*100.00;
	c1 = (sumZ/sumC)*100.00;
	
	printf("Pontos de Saque: %.2lf %%.\n", a1);
	printf("Pontos de Bloqueio: %.2lf %%.\n", b1);
	printf("Pontos de Ataque: %.2lf %%.\n", c1);
	
	return 0;
}
