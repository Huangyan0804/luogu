#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    double ans;
    int n;
    cin >> n;
    if (n <= 150) {
        ans = n * 0.4463;
    } else if (n >= 151 && n <= 400) {
        ans = 150 * 0.4463 + (n - 150) * 0.4663;
    } else if (n >= 401) {
        ans = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    }
    printf("%.1f\n", ans);
    return 0;
}