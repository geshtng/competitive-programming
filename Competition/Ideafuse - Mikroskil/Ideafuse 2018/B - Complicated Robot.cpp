#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string str;
    int len;
    cin>>str;
    len = str.length();
    int x=0,y=0;

    for(int i=0; i<len; i++){
        switch(str[i]){
            case 'N' : y++;
                        break;
            case 'S' : y--;
                        break;
            case 'E' : x++;
                        break;
            case 'W' : x--;
                        break;
        }
    }
    //cout<<x<<" "<<y<<endl;
    cout<<abs(x)+abs(y)<<endl;

    return 0;
}
