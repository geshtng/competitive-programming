#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main () {
    int T;
    int a, b, c, num;
    vector <int> Va, Vb, Vc;
    
    string name;
    vector <string> Vname;

    char op;

    while (cin >> T) {
        for (int i = 0; i < T; i++) {
            scanf("%d %d=%d", &a, &b, &c);
            Va.push_back(a);
            Vb.push_back(b);
            Vc.push_back(c);
        }

        for (int i = 0; i < T; i++) {
            cin >> name >> num >> op;
            switch (op) {
                case '+': 
                    if (Va[num-1] + Vb[num-1] != Vc[num-1]) {
                        Vname.push_back(name);
                    }
                    break;
                case '-': 
                    if (Va[num-1] - Vb[num-1] != Vc[num-1]) {
                        Vname.push_back(name);
                    }
                    break;
                case '*': 
                    if (Va[num-1] * Vb[num-1] != Vc[num-1]) {
                        Vname.push_back(name);
                    }
                    break;
                case 'I': 
                    if (Va[num-1] + Vb[num-1] == Vc[num-1]) {
                        Vname.push_back(name);
                    }
                    else if (Va[num-1] - Vb[num-1] == Vc[num-1]) {
                        Vname.push_back(name);
                    }
                    else if (Va[num-1] * Vb[num-1] == Vc[num-1]) {
                        Vname.push_back(name);
                    }
                    break;
            }
        }

        if (Vname.size() == T) {
            cout << "None Shall Pass!" << endl;
            Va.clear(); Vb.clear(); Vc.clear(); Vname.clear();
            continue;
        }

        if (Vname.size() == 0) {
            cout << "You Shall All Pass!" << endl;
            Va.clear(); Vb.clear(); Vc.clear(); Vname.clear();
            continue;
        }

        sort(Vname.begin(), Vname.end());
        for (int i = 0; i < Vname.size(); i++) {
            if (i == Vname.size() - 1)
                cout << Vname[i] << endl;
            else
                cout << Vname[i] << " ";
        }

        Va.clear(); Vb.clear(); Vc.clear(); Vname.clear();
    }


    return 0;
}
