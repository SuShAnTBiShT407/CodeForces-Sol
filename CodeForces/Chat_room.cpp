#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    char a[6]="hello";
    int j=0;int f=0;
    for(int i=0;i<5;i++){
        while(s[j]!='\0'){
            if(a[i]==s[j]){
                f++;
                j++;
                break;
            }
            else j++;
        }
    }
    if(f==5) cout<<"YES";
    else cout<<"NO";

    return 0;
}