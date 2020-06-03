#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector <int> vec;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    double med;

    if (vec.size() % 2 == 1) 
        med = (double) vec[vec.size()/2];
    else
        med = (double) (vec[(vec.size()-1)/2] + vec[vec.size()/2]) / 2.0;
        
    printf("%.1lf\n", med);
    

    return 0;
}