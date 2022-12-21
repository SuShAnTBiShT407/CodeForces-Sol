#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, set<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        adj[u].insert(v);
        if (direction == 0)
        {
            adj[v].insert(u);
        }
    }

    void printGraph()
    {
        for (auto itr = adj.begin(); itr != adj.end(); itr++)
        {
            cout << (*itr).first << " -> ";
            for (auto i : (*itr).second)
            {
                cout << i << ", ";
            }
            cout << endl;
        }
    }

    void bfs(unordered_map<int, bool> visited, vector<int> ans, int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            ans.push_back(frontNode);
            // traverse all neighbours of front Node
            for (auto i : adj[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }

        for (auto i : ans)
            cout << i << " ";
    }

    // void dfs(unordered_map<int, bool> visited, vector<int> com, int node){
    //     com.push_back(node);
    //     visited[node] = true;
    //     for(auto i: adj[node]){
    //         if(!visited[i]){
    //             dfs(visited, com, node);
    //         }
    //     }
        
    // }
};

int main()
{
    cout << "Enter the number of edges :";
    int n;
    cin >> n;
    graph g;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printGraph();
    vector<int> ans;
    unordered_map<int, bool> visited;
    
    g.bfs(visited, ans, 0);
    
    
    // vector<vector<int>> ans1;
    // for(int i=0; i<n;i++){
    //     if(!visited[i]){
    //         vector<int> com;
    //         g.dfs(visited, com, i);
    //         ans1.push_back(com); 
    //     }
    // }
    // for(auto i:ans1){
    //     for(auto j :i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}