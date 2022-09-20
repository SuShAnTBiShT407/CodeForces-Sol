#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    int alice, bob;
    cin>>n;
    for(int i=0;i<n;i++){
        alice=0;
        bob=0;
        cin>>s;
        int size = s.size();
        alice+=int(s[0]);
        bob+=int(s[size-1]);
        int j=size-2;
        for(int i=1;i<=j;i++){
            if(i==j) break;
            else{
            alice+=int(s[j]);
            bob+=int(s[i]);
            j--;
            }

        }
        if(alice<bob) cout<<"Alice"<<endl;
        else if(bob<alice) cout<<"Bob"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}