#include<bits/stdc++.h>
using namespace std;

void insert_in_graph(unordered_map<int, set<int>> &adj, int num1, int num2){
    adj[num1].insert(num2);
    adj[num2].insert(num1);
}

void print_graph(unordered_map<int, set<int>> adj){
    for(auto i:adj){
        cout<<i.first<<" -> ";
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, set<int>> &adj, vector<int> component){

    component.push_back(node);
    visited[node] =true;

    for(auto i :adj[node]){
        if(!visited[i]){
            dfs(node,visited, adj, component);
        }
    }
}

int main()
{

    int nodes, cities;
    unordered_map<int, set<int>> adj;
    cout<<"Enter number of cities : ";
    cin>>cities;
    cout<<"Enter number of road : ";
    cin>>nodes;
    for(int i=0;i<nodes;i++){
        int num1, num2;
        cin>>num1>>num2;
        insert_in_graph(adj, num1, num2);
    }
    print_graph(adj);
    
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for(int i=0;i<nodes;i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }    
    
    for(auto i:ans){
        for(auto j :i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}