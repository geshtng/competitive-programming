#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string str, com;
    int n;
    vector<string>vec;

    cin>>str;
    cin>>n;

    vec.push_back(str);
    string a,b;

    int i=1;
    while(n--){
        cin>>com;
        if(com == "DELETE"){
            str.pop_back();
            vec.push_back(str);
        }
        else if(com == "ADD"){
            cin>>a;
            str += a;
            vec.push_back(str);
        }
        else if(com == "UNDO"){
            str.clear();
            str = vec[i-2];
            vec.push_back(str);
        }
        else if(com == "INSERT"){
            cin >> a >> b;
            size_t pos;

            pos = str.find(b);
            str.insert(pos+b.size(),a);
            vec.push_back(str);
        }
        i++;
    }

    cout<<str<<endl;

    return 0;
}
