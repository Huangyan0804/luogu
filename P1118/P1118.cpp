/*

    DFS 向下递归搜索数字，
    列举每一种情况，不确定数字是否可以重复
    如果无法进行下去，回溯到上一级

*/


#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100;
int n, sum;
int a[N][N];
void dfs(int sum, int level){
    if(level == n){
        return;
    }

}
int main(){
    cin >> n >> sum;
    dfs(sum, 1);
    return 0;
}