#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    vector<int>vec;

    while(cin>>n){
        vec.push_back(n);
    }

    vector<pair<int, int> > ans;

    int x = 1;
    for(int i=1; i<vec.size(); i++){
       int z = vec[i-1];

       if(vec[i] == z){
            x++;
            if(x==256){
                ans.push_back({255, z});

                x = 1;
            }
       } else {
            ans.push_back({x, z});

            x = 1;
       }
    }

    ans.push_back({x, vec.back()});

    cout<<2*ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i].first<<" "<<ans[i].second;
        if(i == ans.size()-1)
            cout<<endl;
        else
            cout<<" ";
    }


    return 0;
}
