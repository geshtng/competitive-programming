#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	
	while(scanf("%d %d", &x, &y) !=EOF){
		switch(x){
			case 12 : 	if(y>25){
							cout<<"Ja passou!"<<endl;
						}
						else if(y==25){
							cout<<"E natal!"<<endl;
						}
						else if(y==24){
							cout<<"E vespera de natal!"<<endl;
						}
						else if(y<24){
							cout<<"Faltam "<<25-y<<" dias para o natal!"<<endl; break;
						}
						break;
			case 1 : cout<<"Faltam "<<360-y<<" dias para o natal!"<<endl; break;
			case 2 : cout<<"Faltam "<<329-y<<" dias para o natal!"<<endl; break;
			case 3 : cout<<"Faltam "<<300-y<<" dias para o natal!"<<endl; break;
			case 4 : cout<<"Faltam "<<269-y<<" dias para o natal!"<<endl; break;
			case 5 : cout<<"Faltam "<<239-y<<" dias para o natal!"<<endl; break;
			case 6 : cout<<"Faltam "<<208-y<<" dias para o natal!"<<endl; break;
			case 7 : cout<<"Faltam "<<178-y<<" dias para o natal!"<<endl; break;
			case 8 : cout<<"Faltam "<<147-y<<" dias para o natal!"<<endl; break;
			case 9 : cout<<"Faltam "<<116-y<<" dias para o natal!"<<endl; break;
			case 10 : cout<<"Faltam "<<86-y<<" dias para o natal!"<<endl; break;
			case 11 : cout<<"Faltam "<<55-y<<" dias para o natal!"<<endl; break;
		}
	}
	
	return 0;
}
