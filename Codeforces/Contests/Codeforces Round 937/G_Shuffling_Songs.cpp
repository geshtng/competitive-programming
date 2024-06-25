#ifndef LOCAL
    #pragma GCC optimize ("Ofast")
    #pragma GCC optimize ("unroll-loops")
#endif

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

#define FOR(i, a, b) for(int i = int(a); i < int(b); i++)
#define REP(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for(int i = int(b)-1; i >= int(a); i--)
#define PER(i, b) ROF(i, 0, b)

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define bg begin()
#define en end()
#define st first
#define nd second

LL check(vector <vector <LL>> &dp , vector <vector <LL>> &vec , LL mask , LL idx , LL n) { 
    if (mask == 0) return 0; 
    if (idx != -1 && dp[idx][mask] != -1) return dp[idx][mask]; 
 
    LL a = -1 , b = -1; 
    if (idx != -1)  { 
        a = vec[idx][0]; 
        b = vec[idx][1]; 
    } 
 
    LL ans = 0; 
    FOR(i, 0, n) { 
        if (mask & (1 << i)) { 
            if (idx == -1 || (vec[i][0] == a || vec[i][1] == b)) 
                ans = max(ans, 1 + check(dp , vec , (mask^(1 << i)) , i , n)); 
        } 
    } 
 
    if (idx == -1) return ans; 

    return dp[idx][mask] = ans; 
} 
void solve() { 
    LL n; cin >> n; 
    map <string , LL> mp; 
    
    vector <vector <string>> vec(n , vector <string>(2)); 
    FOR(i, 0, n)  { 
        cin >> vec[i][0] >> vec[i][1]; 
        mp[vec[i][0]]+=1; 
        mp[vec[i][1]]+=1; 
    } 
 
    LL num = 1; 
    vector <vector <LL>> vex(n , vector <LL>(2)); 
   
    for(auto itr = mp.begin(); itr != mp.end(); itr++) 
        itr->second = num++; 

    FOR(i, 0, n)  { 
        vex[i][0] = mp[vec[i][0]]; 
        vex[i][1] = mp[vec[i][1]]; 
    } 
 
    LL ans = 0; 
    LL mask = (1<<n)-1; 
    vector <vector <LL>> dp(n+1 , vector <LL>(mask+1 , -1)); 

    cout << n - check(dp , vex , mask , -1 , n) << endl; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
