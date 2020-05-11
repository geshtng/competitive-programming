#include "bits/stdc++.h"
using namespace std;

int isvo(char a){
	return a == 'a' || a == 'i' || a == 'u' || a == 'e' or a == 'o';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int a;cin >> a;
	string x;
	std::locale loc;
	for (int q= 1;q<=a;q++){
		cin >> x;
		vector<int>r;
		vector<string>st;
		for(int i= 0; i<x.size();){
			if(isvo(x[i])){
				r.push_back(0);
				string w = "";
				w += x[i];
			//	cout << w << endl;
				st.push_back(w);
				i++;
			}else{
				if(x[i] == 'n'){
					if(i == x.size()- 1){
						r.push_back(1);
						string w = "";
						w += x[i];
			//			cout << w << endl;
						st.push_back(w);
						i++;
					}else{
						if(x[i+1] == 'g'){
							r.push_back(1);
							string w = "";
							w += x[i];
							w += x[i+1];
			//				cout << w << endl;
							st.push_back(w);
							i+=2;
						}else{
							r.push_back(1);
							string w = "";
							w += x[i];
		//					cout << w << endl;
							st.push_back(w);
							i++;
						}
					}
				}else{
					r.push_back(1);
					string w = "";
					w += x[i];
		//			cout << w << endl;	
					st.push_back(w);
					i++;
				}
			}
		}
		string g = "";
		for(int i=0;i<r.size();i++){
			if(i == 0){
				if(r[i] == r[i+1]){
					transform(st[i].begin(), st[i].end(), st[i].begin(), ::toupper);
					g += st[i];
				}else{
					g += st[i];
				}
			}else if(i == r.size() - 1){
				if(r[i] == r[i-1]){
					transform(st[i].begin(), st[i].end(), st[i].begin(), ::toupper);	
					g += st[i];
				}else{
					g += st[i];
				}
			}else{
				if(r[i] == r[i+1] || r[i] == r[i-1]){
					transform(st[i].begin(), st[i].end(), st[i].begin(), ::toupper);
					g += st[i];
				}else{
					g += st[i];
				}
			}
		}
		cout <<"Case #"<< q << ": " <<  g << endl;
	}
	return 0;
}
