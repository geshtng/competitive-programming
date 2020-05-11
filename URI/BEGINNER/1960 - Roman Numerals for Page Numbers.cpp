#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char ch[5];
    int length;
    
    scanf("%s", &ch);
    length = strlen(ch);
    if(length==3)
    {
        if(ch[0]=='1') cout<<"C";
        else if(ch[0]=='2') cout<<"CC";
        else if(ch[0]=='3') cout<<"CCC";
        else if(ch[0]=='4') cout<<"CD";
        else if(ch[0]=='5') cout<<"D";
        else if(ch[0]=='6') cout<<"DC";
        else if(ch[0]=='7') cout<<"DCC";
        else if(ch[0]=='8') cout<<"DCCC";
        else if(ch[0]=='9') cout<<"CM";
        if(ch[1]=='1') cout<<"X";
        else if(ch[1]=='2') cout<<"XX";
        else if(ch[1]=='3') cout<<"XXX";
        else if(ch[1]=='4') cout<<"XL";
        else if(ch[1]=='5') cout<<"L";
        else if(ch[1]=='6') cout<<"LX";
        else if(ch[1]=='7') cout<<"LXX";
        else if(ch[1]=='8') cout<<"LXXX";
        else if(ch[1]=='9') cout<<"XC";
        if(ch[2]=='1') cout<<"I";
        else if(ch[2]=='2') cout<<"II";
        else if(ch[2]=='3') cout<<"III";
        else if(ch[2]=='4') cout<<"IV";
        else if(ch[2]=='5') cout<<"V";
        else if(ch[2]=='6') cout<<"VI";
        else if(ch[2]=='7') cout<<"VII";
        else if(ch[2]=='8') cout<<"VIII";
        else if(ch[2]=='9') cout<<"IX";
    }
    else if(length==2)
    {
        if(ch[0]=='1') cout<<"X";
        else if(ch[0]=='2') cout<<"XX";
        else if(ch[0]=='3') cout<<"XXX";
        else if(ch[0]=='4') cout<<"XL";
        else if(ch[0]=='5') cout<<"L";
        else if(ch[0]=='6') cout<<"LX";
        else if(ch[0]=='7') cout<<"LXX";
        else if(ch[0]=='8') cout<<"LXXX";
        else if(ch[0]=='9') cout<<"XC";
        if(ch[1]=='1') cout<<"I";
        else if(ch[1]=='2') cout<<"II";
        else if(ch[1]=='3') cout<<"III";
        else if(ch[1]=='4') cout<<"IV";
        else if(ch[1]=='5') cout<<"V";
        else if(ch[1]=='6') cout<<"VI";
        else if(ch[1]=='7') cout<<"VII";
        else if(ch[1]=='8') cout<<"VIII";
        else if(ch[1]=='9') cout<<"IX";
    }
    else if(length==1)
    {
        if(ch[0]=='1') cout<<"I";
        else if(ch[0]=='2') cout<<"II";
        else if(ch[0]=='3') cout<<"III";
        else if(ch[0]=='4') cout<<"IV";
        else if(ch[0]=='5') cout<<"V";
        else if(ch[0]=='6') cout<<"VI";
        else if(ch[0]=='7') cout<<"VII";
        else if(ch[0]=='8') cout<<"VIII";
        else if(ch[0]=='9') cout<<"IX";
    }
    cout<<endl;
    return 0;
}
