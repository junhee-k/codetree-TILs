#include <bits/stdc++.h>
using namespace std;

int n,m,t;
vector<pair<int,int>> ls;

int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

int arr[21][21];
int cnt[21][21];

void move(int x, int y){
    int max_v = 0;
    int dir = 0;
    for(int i=0; i<4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<=0 || ny <=0 || nx > n || ny > n)
            continue;
        if(arr[ny][nx]>arr[y][x] && max_v<arr[ny][nx]){
            max_v = arr[ny][nx];
            dir = i;
        }
    }
    ++cnt[y+dy[dir]][x+dx[dir]];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> t;
    for(int i=1; i<=n;++i){
        for(int j=1; j<=n; ++j){
            cin >> arr[i][j];
        }
    }
    while(m--){
        int x,y;
        cin >> x >> y;
        ls.emplace_back(x,y);
    }
    while(t--){
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                cnt[i][j] = 0;
            }
        }

        for(auto p: ls){
            move(p.first,p.second);
        }
        ls.clear();

        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                if(cnt[i][j]==1){
                    ls.emplace_back(i,j);
                }
            }
        }
        cout << ls.size();
    }
}