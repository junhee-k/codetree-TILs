#include <bits/stdc++.h>
using namespace std;

int k,n;
vector<int> hist;

void dfs(int current){
    if(current > n){
        for(int i: hist){
            cout << i << ' ';
        }
        cout << '\n';
    }
    else{
        for(int i=1; i<=k; ++i){
            hist.push_back(i);
            dfs(current+1);
            hist.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> k >> n;
    dfs(1);
}