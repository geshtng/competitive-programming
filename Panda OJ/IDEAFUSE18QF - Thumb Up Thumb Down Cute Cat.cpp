#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a,b;
    int n,s;

    cin>>n>>s;
    b = (n-s)/2;
    a = (n+s)/2;

    if(n-b==a && s+b==a)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
