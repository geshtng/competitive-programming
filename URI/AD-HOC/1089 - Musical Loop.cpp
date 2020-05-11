#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int n,i,x; 
 	while(scanf("%d", &n) !=EOF){
 		if(n==0){
 			break;
		}
		int array[n];
  		x = 0;
  		for(i = 0; i < n; i++){
  			cin>>array[i];
  		}
 
  		for(i = 0; i < n; i++){
   			if(array[i] < array[(i + 1)%n]){
    			if(array[(i + 1)%n] > array[(i + 2)%n]){
     				x++;
    			}
   			}
   
   			if(array[i] > array[(i + 1)%n]){
    			if(array[(i + 1)%n] < array[(i + 2)%n]){
     				x++;
    			}
   			}
  		}
  
  		cout<<x<<endl;
 	}
 
 	return 0;
}
