class Solution {
public:
    bool isValid(string s) {
        stack <char> sc;
        char last;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                sc.push(s[i]);
                continue;
            }
            
            if (sc.empty()) return false;
            
            switch (s[i]) {
                case ')':
                    last = sc.top();
                    sc.pop();
                    if (last == '{' || last == '[') return false;
                    break;
                case '}':
                    last = sc.top();
                    sc.pop();
                    if (last == '(' || last == '[') return false;
                    break;
                case ']':
                    last = sc.top();
                    sc.pop();
                    if (last == '(' || last == '{') return false;
                    break;
            }
            
        }
        
        return sc.empty();
    }
};