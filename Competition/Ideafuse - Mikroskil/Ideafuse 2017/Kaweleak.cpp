#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
#include <ctype.h>
 
using namespace std;
 
int main()
{
    int tmp = 0;
    char masuk;
    string tmp2 = "";
    string masukan;
 
    std::map<string,char> mymap;
    std::map<string,char>::iterator it = mymap.begin();
 
    string bin = "00100100110000011000010100000000000001001000001010010100001100101010011100101001100100000001111100000011000110110001100010001000000001110100001001101100000111010100001100000001100100011000000011010000000111001100001100010100011100111000010000000011000000101100011001001001100000000101001110010100110010000000110100000001011101011100111100000001010000000011000011000100010111000000001100101001011100100001100101001000000000110111100001000000010011000000101110000100110010000000010000100110011000011110000100110110101001001101100101100011001";
    string teks = "Good Gamethe quick brown fox jumps over the lazy duckOutput is Case Sensitive";
 
    for(int a=0; a < bin.length() ;a = a+7){
        tmp2 = "";
        tmp2 = bin.substr(a,7);
        masuk = teks[tmp];
        mymap.insert (pair<string, char>(bin.substr(a,7),teks[tmp]));
        if(isupper(teks[tmp])){
            if(tmp2[0]=='0'){
                tmp2[0]='1';
            }else{
                tmp2[0]='0';
            }
            mymap.insert (pair<string, char>(tmp2, (tolower(masuk))));
        }else{
            if(tmp2[0]=='0'){
                tmp2[0]='1';
            }else{
                tmp2[0]='0';
            }
            mymap.insert (pair<string, char>(tmp2, (toupper(masuk))));
        }
        tmp++;
    }
    while(cin >> masukan){
        for(int x = 0;x<masukan.length();x = x+7){
              std::cout << mymap.find(masukan.substr(x,7))->second;
        }cout << endl;
    };
    return 0;
}
