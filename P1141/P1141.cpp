#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 1001;
char map[N][N];
int vis[N][N];
int a[10000001];
int n, m, d = 0; // d 保存是第几个连通图
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

struct S {
    int x, y;
} pos;
queue<S> q;
bool ok(int x, int y, int ox, int oy)
{
    if (x <= 0 || x > n || y <= 0 || y > n)
        return false;
    if (vis[x][y] != 0)
        return false;
    if ((map[x][y] == '0' && map[ox][oy] != '1')
        || (map[x][y] == '1' && map[ox][oy] != '0'))
        return false;
    return true;
}
void bfs(int x, int y)
{
    d++;
    int step = 1;
    vis[x][y] = d;
    S front;
    pos.x = x;
    pos.y = y;
    q.push(pos);
    while (!q.empty()) {
        front = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            pos.x = front.x + dx[i];
            pos.y = front.y + dy[i];
            if (ok(pos.x, pos.y, front.x, front.y)) {
                step++;
                vis[pos.x][pos.y] = d;
                q.push(pos);
            }
        }
    }
    a[d] = step;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> map[i][j];
    int x, y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (vis[i][j] == 0) {
                bfs(i, j);
            }
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        cout << a[vis[x][y]] << endl;
    }
    return 0;
}