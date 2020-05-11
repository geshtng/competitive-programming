#include<bits/stdc++.h>
#define MAX 1030
using namespace std;

char table[MAX][MAX];
int n,m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool inGrid(int i, int j){
	if(i<0 || i>=n ||j<0 || j>=m)
		return false;
	return table[i][j] == '.';
}

void dfs(int i, int j){
	table[i][j] = 'o';
	for(int x=0; x<4; x++)
		if(inGrid(i + dx[x], j+dy[x]))
			dfs(i + dx[x], j+dy[x]);
}

int main()
{
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++)
		scanf("%s", table[i]);
		
	int ans = 0;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(table[i][j]=='.'){
				ans++;
				dfs(i,j);
			}
			
	printf("%d\n", ans);
	
	return 0;
}

