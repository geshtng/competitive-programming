#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    char x;

    cin >> a >> x >> b;
    
    if (x == '+')
        cout << a + b << endl;
    else if (x == '-')
        cout << a - b << endl;
    else if (x == '*')
        cout << a * b << endl;
    else if (x == '<') {
        if (a < b)
            cout << "benar" << endl;
        else
            cout << "salah" << endl;
    }
    else if(x == '>') {
        if (a > b)
            cout << "benar" << endl;
        else 
            cout << "salah" << endl;
    }
    else if (x == '=') {
        if (a == b)
            cout << "benar" << endl;
        else
            cout << "salah" << endl;
    }

    return 0;
}