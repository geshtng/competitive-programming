#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    string str;
    deque <int> dq;

    cin >> n;
    while (n--) {
        cin >> str;
        if (str == "push_front") {
            cin >> x;
            dq.push_front(x);
        }
        else if (str == "push_back") {
            cin >> x;
            dq.push_back(x);
        }
        else if (str == "pop_front")
            dq.pop_front();
        else if (str == "pop_back")
            dq.pop_back();
    }

    for (auto &i : dq)
        cout << i << endl;

    return 0;
}