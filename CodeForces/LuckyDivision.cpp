#include<bits/stdc++.h>
using namespace std;

bool checkvalues(int n){

    if(n==0) return true;
    if(n%10==4 || n%10==7){
        n=n/2;
        checkvalues(n);
    }
    else{
       return false;
    }
    return true;
}

int main(){
    int n;
    set<int> s;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0) cout<<"YES";
    //else if(checkvalues(n)) cout<<"YES";
    else cout<<"NO";
    return 0;
}