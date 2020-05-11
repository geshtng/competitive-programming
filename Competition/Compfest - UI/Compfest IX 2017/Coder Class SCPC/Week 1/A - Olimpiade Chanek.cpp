#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
//author Vicky Andreas
int t;
ull a,b,c,d;
cin>>t;
ull pertama,kedua;
while(t--){
	cin>>a>>b>>c>>d;
	pertama = c-a;
	kedua = d-b;
	cout<<pertama+kedua<<endl;
}
return 0;
}
