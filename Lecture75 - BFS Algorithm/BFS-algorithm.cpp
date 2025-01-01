
// 1.Number of Nodes
// 2.Number of Edages

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V,0);
        vector<int> BfsResultContainer;
        
        queue<int> QUEUE;
    
    // we have to push into the queue and mark visited 
        QUEUE.push(0);
        visited[0] = 1;
        
        while(!QUEUE.empty()){
            // we have store the currentNode for adjlist traversal the Node
            int currentNode = QUEUE.front();
            QUEUE.pop();

// ist containing the BFS traversal of the graph starting from the 0th vertex from left to right.    
            BfsResultContainer.push_back(currentNode);
            
            // Go to adjList,Checkout the currentNode is visited or not 
            for(auto neighbourNode : adj[currentNode]){
                if( visited[neighbourNode] == 0){
                    QUEUE.push(neighbourNode);
                    visited[neighbourNode] = 1;
                }
            }
        
        }
        
        return BfsResultContainer;
        
    }
};