

#include <bits/stdc++.h>
using namespace std;

struct Node
{
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
    int countNodes(Node* root) {
        // Write your code here
        if(root == nullptr){
            return 0;
        }
        
        queue<Node*>q;
        q.push(root);
        int count = 0;
        while(!q.empty()){
            Node * temp = q.front();
            q.pop();
            
            count++;
            if(temp->left != nullptr){
                q.push(temp->left);
            }
            
            if(temp->right != nullptr){
                q.push(temp->right);
            }
        }
        return count;
    }
};
