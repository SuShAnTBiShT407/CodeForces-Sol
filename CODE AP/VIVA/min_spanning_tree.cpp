#include<bits/stdc++.h>
using namespace std; 

void insert_in_graph(int n, int m, unordered_map<int, set<int>>& mp){
    mp[n].insert(m);
    mp[m].insert(n);

}

void printgraph(unordered_map<int, set<int>> &mp){

}

void dfs(){

}

int main(){
    unordered_map<int, set<int>> mp;
    int edge;
    cin>>edge;
    for(int i=0;i<edge;i++){
        int n,m;
        cin>>n>>m;
        insert_in_graph(n,m,mp);
    }
    dfs();
    printgraph(mp);
    return 0;
}