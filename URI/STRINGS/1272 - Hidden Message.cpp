#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    int n, fim, cont;
    char texto[51];
    char cok[51];

    scanf("%d",&n);
    std::cin.getline(texto,0);
    for(int i = 0; i < n; i++){
        std::cin.getline(texto,51);
        fim = 0;
        cont = 0;
        for(int j = 0; j < 50; j++){
            if(texto[j] == '\0' || fim == 1) break;
            if(texto[j] >= 97){
                //printf("%c",texto[j]);
                cok[cont] = texto[j];
                cont++;
                while(texto[j] != 32){ 
                    j++;
                    if(texto[j] == '\0'){
                     fim = 1;
                     break;
                    }
                }
            }
         }
         cok[cont] = '\0';
         cout<<cok<<endl;
    }
    
    return 0;
}
