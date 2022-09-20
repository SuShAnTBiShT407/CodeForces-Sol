#include<bits/stdc++.h>
using namespace std;

class Graph{
   
    public:
    map<int, bool> visited;
    map<int , list<int>> m;
    map<int , list<int>> t;
    
    void addEdge(int x, int y, int time);
    void DFS_Left(int v);
};

void Graph::addEdge(int x, int y, int time){
    m[x].push_back(y);
    t[x].push_back(time);
}

void Graph::DFS_Left(int l){
    visited[l] =true;
    list<int>::iterator itr;
    for (itr = m[l].begin(); itr!=m[l].end(); itr++){
        if(!visited[*itr])
            DFS_Left(*itr);
    }

}