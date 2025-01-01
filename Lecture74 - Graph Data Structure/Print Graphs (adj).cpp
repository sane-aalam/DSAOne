
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto it : edges){
            int firstNode = it.first;
            int secondNode = it.second;
            
            // inorder to understand this concept 
            // u-v;
            // v-u;
            
            // u -> firstNode
            // v -> secondNode
            
            adj[firstNode].push_back(secondNode);
            adj[secondNode].push_back(firstNode);
        }
        return adj;
    }
};