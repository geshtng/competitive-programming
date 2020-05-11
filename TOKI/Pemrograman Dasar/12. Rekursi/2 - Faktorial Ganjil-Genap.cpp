#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int func(int n){
    if(n==0) return 1;
    if(n%2==0){
        return (n/2)*func(n-1);
    }else{
        return n*func(n-1);
    }
}

int main(){
    int n;
    
    cin>>n;
    cout<<func(n)<<endl;

    return 0;
}
