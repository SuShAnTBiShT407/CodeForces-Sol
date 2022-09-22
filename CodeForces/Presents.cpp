#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,val;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>val;
        arr[val] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout <<arr[i] << " ";
    }

    return 0;
}