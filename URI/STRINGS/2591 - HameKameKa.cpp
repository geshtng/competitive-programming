#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t, len;
    int h,k,j;
    string str;

    cin>>t;
    while(t--){
        cin>>str;
        len = str.length();
        h=k=0;
        for(int i=0; i<len; i++){
            j=i;
            if(str[i]=='h'){
                while(str[j+1] != 'm'){
                    h++;
                    j++;
                }
            }
            else if(str[i]=='k'){
                while(str[j+1] != 'm'){
                    k++;
                    j++;
                }
            }
        }

        cout<<"k";
        for(int i=0; i<h*k; i++){
            cout<<"a";
        }
        cout<<endl;
    }

    return 0;
}
