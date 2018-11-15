#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 400;
int map[N][N];
int vis[N][N];
int ans[N][N];
int m, n, x, y;
int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
struct Pos {
    int x, y;
    int step;
} pos, front;
queue<Pos> q;
bool ok(Pos pos)
{
    if (pos.x < 0 || pos.x >= n || pos.y < 0 || pos.y >= m)
        return false;
    if (vis[pos.x][pos.y] == 1)
        return false;
    return true;
}
void bfs(int x, int y)
{
    pos.x = x;
    pos.y = y;
    pos.step = 0;
    vis[pos.x][pos.y] = 1;
    ans[pos.x][pos.y] = pos.step;
    q.push(pos);
    while (!q.empty()) {
        front = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            pos.x = front.x + dx[i];
            pos.y = front.y + dy[i];
            pos.step = front.step + 1;
            if (ok(pos)) {
                vis[pos.x][pos.y] = 1;
                ans[pos.x][pos.y] = pos.step;
                q.push(pos);
            }
        }
    }
}

int main()
{
    memset(ans, -1, sizeof(ans));
    cin >> n >> m >> x >> y;
    bfs(x - 1, y - 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%-5d", ans[i][j]);
        printf("\n");
    }
    return 0;
}