#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n, s;
    int a, b;

    cin>>n>>s;
    a = (n+s) / 2;
    b = (n-s) / 2;

    if((a+b==n) && (a-b==s) && (a>=0) && (b>=0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
