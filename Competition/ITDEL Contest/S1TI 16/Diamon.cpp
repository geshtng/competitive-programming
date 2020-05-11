#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,x,i,j,v,l;
	cin>>x;
	if(x%2!=0)
 	{
 		v=1;
 		r=1;
		for(i=1;i<=(x+1)/2;i++){
 			for(j=(x-1)/2;j>=i;j--)
 				cout<<" ";
 			for(j=1;j<=v;j++){
  				if((j==v || j==1 || j==r))
 					cout<<"x";
 				else if (i==(x+1)/2)
					cout<<"x";
 				else
 					cout<<" ";
			}
			cout<<endl;
			v+=2;
 			r++;
 		}
 		
		l=x-2;
 		v=x-2;
 		r=(x-1)/2;
 		for(i=(x-1)/2;i>=1;i--){
  			for(j=(x-1)/2;j>=i;j--)
  				cout<<" ";
  			for(j=1;j<=l;j++){
  				if (j==v || j==r || j==1)
  					cout<<"x";
				else
  					cout<<" ";
  			}
 			cout<<endl;
 			l-=2;
 			v-=2;
 			r--;
		}
	}
}
