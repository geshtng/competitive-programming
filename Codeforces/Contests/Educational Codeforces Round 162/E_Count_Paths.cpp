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


const LL MAX = 200005;
LL total, rtx;
LL c[MAX];
vector <LL> e[MAX], g[MAX], h[MAX];
LL dfn[200005], fact[200005][20], dep[200005];
bool valid[MAX];

void dfsa(LL x, LL f) {
	dfn[x] = ++total;
	fact[x][0] = f;

	for(LL v : e[x]){
		if(v == f) continue;

		dep[v] = dep[x]+1;
		dfsa(v, x);
	}
}

LL slv(LL u, LL v){
	if(dep[u] < dep[v]) swap(u,v);
	
    LL d = dep[u] - dep[v];
	
    ROF(i, 0, 20) if(d & (1 << i)) u = fact[u][i];

	if (u == v) return u;

	ROF(i, 0, 20)
		if(fact[u][i] != fact[v][i]){
			u = fact[u][i];
            v = fact[v][i];
		}

	return fact[u][0];
}

vector<LL> f;
LL dp[200005], dp2[200005];

void dfsb(LL x,LL f){
	for(auto v : g[x]){
		if(v == f) continue;
		dfsb(v,x);
		dp[x] += dp[v];
	}

	if(valid[x]){
		for(auto v : g[x]){
			if(v == f) continue;
			
            dp[x] += dp2[v];
		}

		dp2[x] = 1;
	} else {
		for(auto v : g[x]){
			if(v == f) continue;
			
            dp2[x] += dp2[v];
		}

		vector<LL> al;
		for(auto v : g[x]){
			if(v == f) continue;
			
            al.push_back(dp2[v]);
		}

		vector<LL> suffix(al.size()+1, 0);
		ROF(i, 0, al.size()) suffix[i] = suffix[i+1] + al[i];
		
        REP(i, al.size()) dp[x] += al[i] * suffix[i+1];
	}
}

void generate(LL x){
	sort(h[x].begin(),h[x].end(),[&](LL a, LL b){
		return dfn[a] < dfn[b];
	});
    
	vector<LL> cl;
	FOR(i, 0, h[x].size()-1) {
		cl.push_back(h[x][i]);
		cl.push_back(slv(h[x][i], h[x][i+1]));
	}

	cl.push_back(h[x].back());
	sort(cl.begin(), cl.end(),[&](LL a,LL b){
		return dfn[a] < dfn[b];
	});

	LL len = unique(cl.begin(),cl.end()) - cl.begin();
	f.clear();

	FOR(i, 0, len-1) {
		LL lcx = slv(cl[i],cl[i+1]);
		
        g[lcx].push_back(cl[i+1]);
		g[cl[i+1]].push_back(lcx);
		f.push_back(lcx);
		f.push_back(cl[i+1]);
		rtx = lcx;
	}
    
	sort(f.begin(), f.end());
	LL tmp = unique(f.begin(), f.end()) - f.begin();
	f.resize(tmp);
}

void solve() {
    LL n; cin>>n;
    
	FOR(i, 1, n+1) {
        h[i].clear();
        e[i].clear();
    }

	FOR(i, 1, n+1){
        cin>>c[i];
        h[c[i]].push_back(i);
    }
	
    FOR(i, 1, n){
		LL u, v; cin >> u >> v;
		e[u].push_back(v),e[v].push_back(u);
	}

	dfsa(1,0);
	FOR(i, 1, 20){
		FOR(j, 1, n+1)
            fact[j][i] = fact[fact[j][i-1]][i-1];
	}

	LL res=0;
	FOR(i, 1, n+1){
		if(h[i].size() <= 1) continue;
		
        generate(i);
		
        for(auto v : f) valid[v] = (c[v] == i);
		
		dfsb(rtx,0);

		res += dp[rtx];
		
        for(auto v:f){
            g[v].clear();
            valid[v] = 0;
            dp[v] = dp2[v] = 0;
        }
	}

	cout<< res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    LL t; cin >> t;
    while (t--) solve();

    return 0;
}
