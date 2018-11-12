#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
const int N = 31;
int n;
char map[N][N];
int vis[N][N];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

struct Pos {
    int x, y;
};

int ok(Pos pos)
{
    if (pos.x < 0 || pos.x >= n || pos.y < 0 || pos.y >= n)
        return 0;
    if (vis[pos.x][pos.y])
        return 0;
    if (map[pos.x][pos.y] != '0')
        return 0;
    return 1;
}

// queue<Pos> q;
// void bfs(int x, int y)
// {
//     Pos pos;
//     pos.x = x;
//     pos.y = y;
//     q.push(pos);
//     while (!q.empty()) {
//         Pos front = q.front();
//         q.pop();
//         if (map[front.x][front.y] == '0')
//             map[front.x][front.y] = '2';
//         for (int i = 0; i < 4; i++) {
//             pos.x = front.x + dx[i];
//             pos.y = front.y + dy[i];
//             if (ok(pos)) {
//                 vis[front.x][front.y] = 1;
//                 q.push(pos);
//             }
//         }
//     }
// }

void dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n)
        return;
    if (vis[x][y])
        return;
    if (map[x][y] != '0')
        return;
    vis[x][y] = 1;
    if (map[x][y] == '0')
        map[x][y] = '3';
    for (int i = 0; i < 4; i++) {
        dfs(x + dx[i], y + dy[i]);
    }
}

void dfs1(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n)
        return;
    if (vis[x][y])
        return;
    if (map[x][y] != '0')
        return;
    vis[x][y] = 1;
    if (map[x][y] == '0')
        map[x][y] = '2';
    for (int i = 0; i < 4; i++) {
        dfs1(x + dx[i], y + dy[i]);
    }
}

int main(int argc, char const* argv[])
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> map[i][j];

    for (int i = 0; i < n; i++)
        if (vis[i][0] == 0 && map[i][0] == '0')
            dfs(i, 0);
    for (int i = 0; i < n; i++)
        if (vis[i][n - 1] == 0 && map[i][n - 1] == '0')
            dfs(i, n - 1);
    for (int i = 0; i < n; i++)
        if (vis[0][i] == 0 && map[0][i] == '0')
            dfs(0, i);
    for (int i = 0; i < n; i++)
        if (vis[n - 1][i] == 0 && map[n - 1][i] == '0')
            dfs(n - 1, i);

    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == '0') {
                dfs1(i, j);
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++) {
            if (map[i][j] == '3')
                cout << '0' << ' ';
            else
                cout << map[i][j] << ' ';
        }
    return 0;
}
