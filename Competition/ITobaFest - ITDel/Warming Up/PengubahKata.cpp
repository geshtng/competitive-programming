#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string str, ans="";
    bool camel = true, snake = false;

    cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='_'){
            snake = true;
            camel = false;
            break;
        }
    }

    if(camel){
        for(int i=0; i<str.size(); i++){
            if(isupper(str[i])){
                ans += "_";
                ans += tolower(str[i]);
            } else {
                ans += str[i];
            }
        }
    }
    else if(snake){
        for(int i=0; i<str.size(); i++){
            if(str[i] == '_'){
                ans += toupper(str[i+1]);
                i++;
                continue;
            } else {
                ans += str[i];
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
