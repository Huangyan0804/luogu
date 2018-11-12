#include <bits/stdc++.h>
using namespace std;
int n;
char c[101][101];
char ans[101][101];
const char str[9] = "yizhong#";
char planx[8], plany[8];
int oldx, oldy;

void dfs(int x, int y, int cur)
{
    if (cur == 7) {
        for (int i = 0; i < 7; i++) {
            ans[planx[i]][plany[i]] = str[i];
        }
        return;
    } else {
        if (x < 0 || x >= n || y < 0 || y >= n) {
            return;
        }
        if (c[x][y] != str[cur]) {
            return;
        }
        planx[cur] = x;
        plany[cur] = y;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (i == 0 && j == 0)
                    continue;
                if (cur == 0) {
                    oldx = i;
                    oldy = j;
                    dfs(x + i, y + j, cur + 1);
                } else if (i == oldx && j == oldy) {
                    dfs(x + i, y + j, cur + 1);
                }
            }
        }
    }
}
int main()
{
    memset(ans, '*', sizeof(ans));
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> c[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dfs(i, j, 0);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
