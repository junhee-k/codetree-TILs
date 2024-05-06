#include <bits/stdc++.h>
using namespace std;

int dy[] = {-1,1,0,0};
int dx[] = {0,0,-1,1};
int n;
int arr[100][100];

int main() {
    int r,c;
    cin >> n >> r >> c;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> arr[i][j];
        }
    }
    r=r-1, c= c-1;
    while(true){
        cout << arr[r][c] << ' ';
        int dir = -1;
        int curr_v = arr[r][c];
        for(int i=0; i<4; ++i){
            int ny = r+dy[i];
            int nx = c+dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= n)
                continue;
            if(curr_v < arr[ny][nx]){
                curr_v = arr[ny][nx], dir=i;
                break;
            }
        }
        if(dir==-1){
            break;
        }
        r += dy[dir], c += dx[dir];
    }
    return 0;
}