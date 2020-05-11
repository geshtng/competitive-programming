#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll stringToInt(string num) {
    return stoll(num);
}

ll binToDec(string num) {
    string number = num;
    ll dec = 0;
    ll base = 1;
    ll len = num.length();

    for(ll i=len-1; i>=0; i--) {
        if(number[i] == '1')
            dec += base;
        base *= 2;
    }

    return dec;
}

ll hexToDec(string num) {
    ll len = num.length();
    ll rem, dec = 0;
    
    for(ll i=0; num[i] != '\0'; i++) {
        len--;
        if(num[i] >= '0' && num[i] <= '9') 
            rem = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
            rem = num[i] - 87;
        else if(num[i] >= 'A' && num[i] <= 'F')
            rem = num[i] - 55;

        dec += rem * pow(16, len);
    }

    return dec;
}

void toHex(ll num) {
    char hex[101];
    int i = 0;

    while (num != 0) {
        int temp = 0;
        temp = num % 16;

        if(temp < 10) {
            hex[i] = temp + 48;
            i++;
        } else {
            hex[i] = temp + 55;
            i++;
        }

        num /= 16;
    }

    for(int j=i-1; j>=0; j--) {
        if(isupper(hex[j]))
            putchar(tolower(hex[j]));
        else
            putchar(hex[j]);
        
    }

    cout << " hex" << endl;
}

void toBin(ll num) {
    vector <ll> vec;

    for(ll i=0; num>0; i++) {
        vec.push_back(num % 2);
        num /= 2;
    }

    for(ll i=vec.size()-1; i>=0; i--) {
        cout << vec[i];
    }

    cout << " bin" << endl;
}

int main () {
    ll N;
    string X, Y;

    cin >> N;
    for(ll i=0; i<N; i++) {
        cin >> X >> Y;

        cout << "Case " << i+1 << ":" << endl;

        if (Y == "bin") {
            cout << binToDec(X) << " dec" << endl;   
            toHex(binToDec(X));
        }
        else if(Y == "dec") {
            toHex(stringToInt(X));
            toBin(stringToInt(X));
        }
        else if(Y == "hex") {
            cout << hexToDec(X) << " dec" << endl;
            toBin(hexToDec(X));
        }
        
        cout << endl;
    }    

    return 0;
}