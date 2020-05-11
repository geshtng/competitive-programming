#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
         int m, l;
        cin >> m >> l;
         int M[m][n];
         int L[l][n];

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> M[i][j];
            }
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < n; j++){
                cin >> L[i][j];
            }
        }

        int cm, cl, aa;
        cin >> cm >> cl;
        cin >> aa;

        int mar = M[cm-1][aa-1];
        int leo = L[cl-1][aa-1];

        if(mar > leo) printf("Marcos\n");
        if(mar < leo) printf("Leonardo\n");
        if(leo == mar) printf("Empate\n");

    }
    return 0;
}

