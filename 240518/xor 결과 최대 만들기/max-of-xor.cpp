#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> hist;
int arr[21];
int ans,val;

void dfs(int current, int cnt){
    if(cnt > m){
        return;
    }
    if(current > n){
        if(cnt == m){
            ans = max(val,ans);
        }
        return;
    }

    val ^= arr[current];
    dfs(current + 1, cnt + 1);
    val ^= arr[current]; //자기 자신을 xor하면 원래대로 돌아간다.
    dfs(current + 1, cnt);
}

int main(){
    cin >> n >> m;
    for(int i=1;i<=n;++i){
        cin >> arr[i];
    }
    dfs(1,0);
    cout << ans;
}