#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    int sum=0;
    int count=0;

    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
        sum+=arr[i]; 
    }
    int j=0;
    sort(arr, arr+n);
    for(int i=n-1;i>=0;i--){
        j = j+arr[i];
        count++;
        if(j>sum/2) break;
    }
    cout<<count<<endl;
    return 0;
}