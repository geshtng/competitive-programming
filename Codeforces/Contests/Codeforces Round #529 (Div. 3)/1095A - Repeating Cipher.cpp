#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    string str;

    cin>>n>>str;
    for(int i=0, j=0; j<n; j+=i+1, i++){
        cout<<str[j];
    }
    cout<<endl;

    return 0;
}
