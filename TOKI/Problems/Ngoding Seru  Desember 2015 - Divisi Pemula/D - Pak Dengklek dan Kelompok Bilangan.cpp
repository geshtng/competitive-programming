#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    scanf("%d", &n);

    vector <int> negatif, nol, positif;
    for(int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        if (x < 0) negatif.push_back(x);
        else if (x == 0) nol.push_back(x);
        else if (x > 0) positif.push_back(x);
    }

    int x = negatif.size();
    int y = nol.size();
    int z = positif.size();

    for (int i = 0; i < x; i++) 
        printf("%d\n", negatif[i]);
    

    for (int i = 0; i < y; i++) 
        printf("%d\n", nol[i]);
    

    for (int i = 0; i < z; i++) 
        printf("%d\n", positif[i]);
    

    return 0;
}