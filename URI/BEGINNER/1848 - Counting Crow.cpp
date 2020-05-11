#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum;
	char ch[10];
	int i;
	
	for(i=0; i<3; i++){
		sum=0;
		while(1){
			
			gets(ch);
			if(ch[0]=='c')
				break;
				
			if(ch[0]=='-'){
				if(ch[1]=='-'){
					if(ch[2]=='-'){
						sum+=0;
					} else {
						sum+=1;
					}
				} else {
					if(ch[2]=='-'){
						sum+=2;
					} else {
						sum+=3;
					}
				}
			}
			else if(ch[0]=='*'){
				if(ch[1]=='-'){
					if(ch[2]=='-'){
						sum+=4;
					} else {
						sum+=5;
					}
				} else {
					if(ch[2]=='-'){
						sum+=6;
					} else {
						sum+=7;
					}
				}
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
