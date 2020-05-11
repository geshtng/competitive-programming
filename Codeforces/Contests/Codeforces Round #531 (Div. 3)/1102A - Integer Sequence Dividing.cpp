#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n, ans;

    cin>>n;
    if(n%2==1){
        ans = (n%4==3) ? 0 : 1;
    } else {
        ans = (n%4==2) ? 1 : 0;
    }

    cout<<ans<<endl;

    return 0;
}
