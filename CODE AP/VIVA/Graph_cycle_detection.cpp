#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, set<int>> adj;
    void addEdge(int u, int v){
        adj[u].insert(v);
        adj[v].insert(u);
    }
    void dfs(unordered_map<int, bool> visited, vector<int> com, int node)
    {
        com.push_back(node);
        visited[node] = true;
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                dfs(visited, com, node);
            }
        }
    }
};


int main(){
    cout << "Enter the number of cities and no of roads :";
    int n, r;
    cin >> n >> r;
    
    graph g;
    for (int i = 0; i < r; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    vector<int> com;
    unordered_map<int, bool> visited;
    int node;
    g.dfs(visited, com , node);

        return 0;
}