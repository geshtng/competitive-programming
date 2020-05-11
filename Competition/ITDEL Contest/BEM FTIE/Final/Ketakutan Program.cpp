#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    char arr[n+2][n+2];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    string ans="";
    for(int i=0; i<n*2-1; i++){
        int z = i<n ? 0 : i-n+1;
        for(int j=z; j<=i-z; ++j){
            ans+= arr[j][i-j];
        }
    }

    cout<<ans<<endl;

    return 0;
}
