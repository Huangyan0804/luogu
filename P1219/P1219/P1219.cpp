#include <algorithm>
#include <iostream>
using namespace std;
int chess[14];
int vis[3][30];
int cnt = 0;
int n;
void dfs(int cur)
{
    if (cur == n + 1) {
        cnt++;
        if (cnt <= 3) {
            for (int i = 1; i <= n; i++)
                cout << chess[i] << ' ';
            cout << endl;
        }
        return;
    } else {
        for (int i = 1; i <= n; i++) {
            if (!vis[0][i] && !vis[1][cur + i] && !vis[2][cur - i + n]) {
                chess[cur] = i;
                vis[1][i + cur] = vis[0][i] = vis[2][cur - i + n] = 1;
                dfs(cur + 1);
                // 回溯
                vis[1][i + cur] = vis[0][i] = vis[2][cur - i + n] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    dfs(1);
    cout << cnt << endl;
    return 0;
}