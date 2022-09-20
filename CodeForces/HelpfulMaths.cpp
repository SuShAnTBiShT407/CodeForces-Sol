#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t, output;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            t+=s[i];
        }
    }
    cout<<t<<endl;
    sort(t.begin(), t.end());
    
    for(int i=0;i<t.size();i++){
        output+=t[i];
        output+="+";
    }
    output[t.size()+2] = ' ';
    cout<<output<<endl;
    return 0;
}