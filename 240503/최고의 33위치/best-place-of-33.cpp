#include <bits/stdc++.h>
using namespace std;

int n;
int arr[21][21];
int count(int x, int y){
    int c=0;
    for(int i=0; i<3;++i){
        for(int j=0;j<3;++j){
            c += arr[x+i][y+j];
        }
    }
    return c;
}

int main() {
    cin >> n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> arr[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n-2;++i){
        for(int j=0;j<n-2;++j){
            ans = max(ans, count(i,j));
        }
    }
    cout << ans;
    return 0;
}