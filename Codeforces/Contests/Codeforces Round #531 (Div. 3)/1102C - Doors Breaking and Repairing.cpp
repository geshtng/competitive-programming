#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,x,y;
    int ans=0;

    cin>>n>>x>>y;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    if(x>y){
        cout<<n<<endl;
        return 0;
    }
    sort(vec.begin(),vec.end());
    for(int i=0; i<n; i+=2){
        if(vec[i]<=x)
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}
