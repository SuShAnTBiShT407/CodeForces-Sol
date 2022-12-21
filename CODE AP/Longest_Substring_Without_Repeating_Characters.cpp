// Given a string s, find the length of the longest substring without repeating characters.

#include<bits/stdc++.h>
using namespace std;


int longestsubstring(string s){
    map<char, int> m;
    int max_len = 0;
    int start=0;
    for (int end=0; end< s.length(); end++){
        if(m.find(s[end])!=m.end()){
            start = max(start, m[s[end]]+1);
        }
        m[s[end]] = end;
        max_len =   max(max_len, end-start+1);
    }
    return max_len;
}



int main(){
    string s = "abcabcbb";
    cout<<"The given String "<<s<<endl;
    cout<<longestsubstring(s);

}