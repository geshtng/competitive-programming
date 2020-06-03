#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y;
    string str;
    deque <int> dq;
    bool reversed = false;

    cin >> n;
    while (n--) {
        cin >> str;

        if (str == "add") {
            cin >> x >> y;

            if (reversed)
                for (int i = 0; i < y; i++)
                    dq.push_front(x);
            else
                for (int i = 0; i < y; i++)
                    dq.push_back(x);

            cout << dq.size() << endl;
        }
        else if (str == "del") {
            cin >> y;
            int temp;

            if (reversed) {
                temp = dq[dq.size()-1];
                for (int i = 0; i < y; i++)
                    dq.pop_back();
            } else {
                temp = dq[0];
                for (int i = 0; i < y; i++)
                    dq.pop_front();
            }
            
            cout << temp << endl;
        }
        else if (str == "rev") 
            if (!reversed) reversed = true;
            else reversed = false;
    }

    return 0;
}