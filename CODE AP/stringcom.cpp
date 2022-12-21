#include<bits/stdc++.h>
using namespace std;


int main(){


unordered_map<char, string> m;
string str;
cout<<"Enter te string: ";
cin>>str;
cout<<endl;
for (int i=0;i<str.size();i++){
    m[str[i]] = str[i];
}
int size_of_m = m.size();
int size_of_str= str.size();
cout<<size_of_str-size_of_m;
    return 0;
} 