#include <algorithm>
#include <iostream>
using namespace std;
int r, c;
const int N = 105;
int map[N][N], f[N][N];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
bool ok(int i, int j)
{
    if (i <= 0 || i > r || j <= 0 || j > c)
        return false;
    return true;
}
int dfs(int i, int j)
{
    if (f[i][j] > 1)
        return f[i][j];
    int b = 0;
    for (int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ok(ni, nj) && map[ni][nj] > map[i][j]) {
            b = max(b, dfs(ni, nj) + 1);
        }
    }
    f[i][j] = max(b, f[i][j]);
    return f[i][j];
}
int main()
{
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> map[i][j];
            f[i][j] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            int t = dfs(i, j);
            ans = max(ans, t);
        }
    }
    cout << ans << endl;
    return 0;
}