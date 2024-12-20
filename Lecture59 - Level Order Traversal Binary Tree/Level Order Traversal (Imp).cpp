
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root) {
        // Your code here
        queue<Node*> q;
        q.push(root);
        vector<int> levelwiseTraversal;
        
        while(!q.empty()){
            // take node into front of queue
            Node * currentNode = q.front();
            q.pop();
            
            // push into the result array (which is sorting level wise result)
            levelwiseTraversal.push_back(currentNode->data);

            // Left side node is not nullptr,which means left side of binary tree(current node have some node)
            // it can be right side also.
            if(currentNode->left != nullptr){
                q.push(currentNode->left);
            }
            
            if(currentNode->right != nullptr){
                q.push(currentNode->right);
            }
        }
        return levelwiseTraversal;
    }
};