#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int>vec;

void gen(){
    int sum=0;
    for(int i=1; i<=1000000; i++){
        sum+=i;
        vec.push_back(sum);
    }
}

int main(){
    int t, x;
    bool test;

    gen();

    cin>>t;
    for(int j=0; j<t; j++){
        cin>>x;
        test = false;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] == x){
                test = true;
                break;
            }
        }

        if(test)
            cout<<"Case #"<<j+1<<": YES"<<endl;
        else
            cout<<"Case #"<<j+1<<": NO"<<endl;
    }


    return 0;
}
