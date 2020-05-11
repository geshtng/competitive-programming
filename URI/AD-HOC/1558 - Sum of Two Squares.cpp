#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[101];

void generate() {
    for(int i = 1; i <= 100; i++) {
        arr[i] = i*i;
    }
}

int main () {
    int N;
    generate();
    
    while(cin >> N) {
        bool hue = false;
        for(int i = 0; i <= 100; i++) 
            for(int j = 0; j <= 100; j++) 
                if (arr[i] + arr[j] == N)
                    hue = true;    
        

        (hue) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}