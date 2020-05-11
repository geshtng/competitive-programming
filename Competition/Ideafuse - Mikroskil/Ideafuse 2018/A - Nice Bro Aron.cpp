#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;

    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int ans=0;
    for(int i=1; i<n; i++){
        ans += arr[i];
    }
    cout<<ans<<endl;

    return 0;
}
