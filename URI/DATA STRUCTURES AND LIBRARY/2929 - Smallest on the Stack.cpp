#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string cmd;
    int t, n;
    stack <int> sti;
    unordered_map <int, int> umii;
    priority_queue <int> qi;

    cin >> t;
    while (t--) {
        cin >> cmd;

        if (cmd == "PUSH") {
            cin >> n;

            sti.push(n);

            umii[n]++;
            qi.push(-n);
        } else if (cmd == "POP") {
            if (sti.empty()) {
                cout << "EMPTY\n";
                continue;
            }

            umii[sti.top()] -= 1;
            sti.pop();
        } else {
            if (sti.empty()) {
                cout << "EMPTY\n";
                continue;
            }

            while (!qi.empty()) {
                int top = abs(qi.top());

                if (umii[top] > 0) {
                    cout << top << "\n";
                    break;
                } else {
                    qi.pop();
                }
            }
        }
    }

    return 0;
}
