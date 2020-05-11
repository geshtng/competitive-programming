#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N, G, X;
    char Ri, Rii;
    int Vi;
    map <char, int> mp;
    vector<char>vec;

    cin >> N >> G;
    while (N--) {
        cin >> Ri >> Vi;
        mp.insert(make_pair(Ri, Vi));
    }

    cin >> X;
    while(X--) {
        cin >> Rii;
        vec.push_back(Rii);
    }

    map <char, int> ::iterator itr;
    int sum = 0;
    for (int i=0; i<vec.size(); i++) {
        for(itr = mp.begin(); itr != mp.end(); itr++) {
            if (vec[i] == itr->first) {
                sum += itr->second;
            }
        }
    }

    cout << sum << endl;
    (sum >= G) ? cout << "You shall pass!": cout << "My precioooous";
    cout << endl;

    return 0;
}