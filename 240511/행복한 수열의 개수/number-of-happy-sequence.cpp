#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[100][100];


int main() {
    cin >> n >> m;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> arr[i][j];
        }
    }
    
    int ans = 0;
    //horizontal search
    for(int i=0;i<n;++i){
        int count=1;
        int mx = 1;
        for(int j=1;j<n;++j){
            if(arr[i][j-1]==arr[i][j]){
                count += 1;
            }
            else{
                count = 1;
            }
            mx = max(count,mx);
        }
        if(mx>=m){
            ans+=1;
            //cout <<"h: "<< i << "\n";
        }
    }
    //vertical search
    for(int j=0;j<n;++j){
        int count=1;
        int mx = 1;
        for(int i=1;i<n;++i){
            if(arr[i-1][j]==arr[i][j]){
                count += 1;
            }
            else{
                count = 1;
            }
            mx = max(count,mx);
        }
        if(mx>=m){
            ans+=1;
            //cout <<"v: "<< j<< "\n";
        }
    }
    cout << ans;
    return 0;
}