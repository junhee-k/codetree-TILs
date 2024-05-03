#include <bits/stdc++.h>
using namespace std;

int n,t;
int arr1[200];
int arr2[200];

int main() {
    cin >> n >> t;
    for(int i=0;i<n;++i){
        cin >> arr1[i];
    }
    for(int i=0;i<n;++i){
        cin >> arr2[i];
    }
    for(int j=0;j<t;++j){
        int tmp1 = arr1[n-1];
        int tmp2 = arr2[n-1];
        for(int i=n-1; i>0; --i){
            arr1[i]= arr1[i-1];
            arr2[i]= arr2[i-1];
        }
        arr1[0]=tmp2;
        arr2[0]=tmp1;
    }
    for(int i=0; i<n;++i){
        cout << arr1[i]<< " ";
    }
    cout << "\n";
    for(int i=0; i<n;++i){
        cout << arr2[i]<< " ";
    }
}