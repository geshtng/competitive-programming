#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,dat,i,lmao;
	int bill[15] = {7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};

	while((scanf("%d %d", &x, &y)) !=EOF){
		if(x==0 && y==0){
			break;
		}
		dat = y-x;
		for(i=0, lmao=0; i<15; i++){
			if(bill[i]==dat){
				lmao=1;
				break;
			}
		}
		if(lmao)
			cout<<"possible"<<endl;
		else
			cout<<"impossible"<<endl;
		
	}
	
	return 0;
}
