#include<bits/stdc++.h>
using namespace std;

set<string> str;
void solve(string s, string choose){

    //cout<<"permute(\""<<s<<"\" ,\" "<<choose<<"\")"<<endl;

    if(s.empty()){
        str.insert(choose);
    }
    else{
        //  choose/explore/un-choose
        for(int i=0;i<s.length();i++){
            // choose
            char c = s[i];
            choose+=c;
            s.erase(i, 1);

            //explore
            solve(s, choose);

            //un-choose
            s.insert(i, 1, c);
            choose.erase(choose.length()-1, 1);

        }
    }

    for(auto i: str) cout<<i<<endl;
}
int powerFun(int base, int exp){
    if(exp==1){
        return base;
    }else{
        return base *powerFun(base, exp - 1);
        
    }
    
}
int main(){

    int base, exp;
    string s;
    cin>>base>>exp;
    //cin>>s;
    cout<<endl;
    //solve(s, "");
    cout<<powerFun(base, exp);
    return 0;
}