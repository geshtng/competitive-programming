#include <cmath>  
 #include <cstdio>  
 #include <vector>  
 #include <iostream>  
 #include <cstring>  
 #include <algorithm>  
 using namespace std;  
 int main() {  
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int t;  
   cin>>t;  
   while(t--)  
   {  
     char inp[10000]  ;  
     cin>>inp;  
     int first=0,last=strlen(inp)-1,ans = 0,count;  
     do{  
       int ff = inp[first];  
       int ll = inp[last];  
       if(ff!=ll)  
         {  
         int count = abs (ff-ll);  
         ans = ans +count;  
       }  
       first++;  
       last--;  
     }while(first<last);  
     cout<<ans<<endl;  
   }  
   return 0;  
 }  
