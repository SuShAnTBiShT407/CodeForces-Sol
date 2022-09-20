#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int temp_size=2;
    int size;
    cin>>n;
    
    for (int i=0;i<n;i++){
        cin>>size;
        string str;
        string b="";
        int val;
        cin>>str;
        for(int i=size-1; i>=0;){
            if(str[i]=='0'){
                val = (str[i-2]-48)*10 + (str[i-1]-48);
                i=i-3;
            }
            else{
                val = str[i]-48;
                i--;
            }
            b+=char(val+96);
        }
    reverse(b.begin(), b.end());
    cout<<b<<"\n";
    }
    return 0;
}