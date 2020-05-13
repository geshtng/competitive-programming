#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    scanf("%d", &n);
    
    vector <int> vec;    
    for (int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        vec.push_back(x);
    }

    for (int i = 1; i < n; i++) 
        printf("%d ", vec[i]);
    printf("%d\n", vec[0]);

    return 0;
}