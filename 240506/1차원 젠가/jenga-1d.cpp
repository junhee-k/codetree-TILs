#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100];

void drop(int x,int y){
    vector<int> vec;
    for(int i=0;i<n;++i){
        if(i<x-1 || i>y-1)
            vec.push_back(arr[i]);
    }
    n = vec.size();
    for(int i=0; i<vec.size();++i){
        arr[i] = vec[i];
    }
}

int main() {
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    int x,y;
    cin >> x >> y;
    drop(x,y);
    cin >> x >> y;
    drop(x,y);

    cout << n << '\n';
    for(int i=0;i<n;++i){
        cout << arr[i] << '\n';
    }
    return 0;
}