#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int m, n, t;
int sx, sy, fx, fy;
int x, y;
int map[6][6] = { 0 };
int vis[6][6] = { 0 };
int cnt = 0;
int dr[] = { 0,-1,0,1,1,0,-1,0 };
void dfs(int x, int y) {
	if (x < 1 || x > n || y < 1 || y > m)
		return;
	if (map[x][y] == 1 || vis[x][y] != 0)
		return;
	if (x == fx && y == fy) {
		cnt++;
		return;
	}
	else {
		vis[x][y] = 1;
	}
	// dfs
	for (int i = 0; i < 8; i += 2)
		dfs(x + dr[i], y + dr[i + 1]);
	vis[x][y] = 0; // ‘≠µÿªÿÀ›£ø
}
int main() {
	cin >> n >> m >> t;
	cin >> sx >> sy >> fx >> fy;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		map[x][y] = 1; // ’œ∞≠
	}
	dfs(sx , sy);
	cout << cnt << endl;
	return 0;
}