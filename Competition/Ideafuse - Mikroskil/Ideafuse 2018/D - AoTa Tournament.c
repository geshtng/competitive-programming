#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string str;
char f[10000], se[10000];
int a,b;

map<string,int>maps;

bool c(const pair<string,int>&a, const pair<string,int>&b){
	return a.second > b.second;
}

int main(){
	for(int i=1;i<=8;i++){
		cin >> str;
		maps.emplace(str,0);
	}

	vector<pair<string,int> > vs;
	cin.ignore();

	for(int i=1;i<=28;i++){
		scanf("%s %d - %d %s", f,&a, &b, se);
		if(a > b)maps[f]++;
		else maps[se]++;
	}

	for(auto i : maps){
		vs.push_back(make_pair(i.first,i.second));
	}

	sort(vs.begin(),vs.end(),c);

	for(int i=0;i<vs.size();i++){
		cout << vs[i].first << ' ' << vs[i].second << endl;
	}

	return 0;
}
