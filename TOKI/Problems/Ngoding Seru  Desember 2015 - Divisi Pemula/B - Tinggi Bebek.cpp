#include<bits/stdc++.h>
using namespace std;

int main () {
    int x;
    vector <int> vec;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &x);
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    printf("%d\n%d\n%d\n", vec[0], vec[2], vec[1]);

    return 0;
}