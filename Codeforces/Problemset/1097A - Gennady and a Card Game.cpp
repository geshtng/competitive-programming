#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string a,b;
    bool hue = false;

    cin>>a;
    for(int i=0; i<5; i++){
        cin>>b;
        if(a[0]==b[0] || a[1]==b[1]) hue = true;
    }

    (hue) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}
