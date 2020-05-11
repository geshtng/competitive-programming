#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    
	cin>>x>>y>>z;
	int tmp=z-1;	
    while(y!=0){
		if(tmp==x){
			tmp=1;
		} else {
			tmp++;
		}
		y--;
    }
	cout<<tmp<<endl;
    return 0;
}
