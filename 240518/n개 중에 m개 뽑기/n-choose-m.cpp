#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> hist;

void dfs(int current, int cnt){
    if(cnt > m){
        return;
    }
    if(current > n){
        if(cnt == m){
            for(int i: hist){
                cout << i << ' ';
            }
            cout << '\n';
        }
        return;
    }

    hist.push_back(current);
    dfs(current + 1, cnt + 1);
    hist.pop_back();
    dfs(current + 1, cnt);
}

int main(){
    cin >> n >> m;
    dfs(1,0);
}