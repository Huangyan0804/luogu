#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[10001];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
        next_permutation(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}