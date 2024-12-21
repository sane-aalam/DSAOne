
#include <bits/stdc++.h>
using namespace std;
// A binary tree node has data, pointer to left child and a pointer to right child 
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

// Should return Right view of tree
class Solution
{
    private:
    void helper(Node *root,int level, vector<int>&rightViewHumanEye){
        if(root == nullptr){
            return; 
        }
        
        if(level == rightViewHumanEye.size()){
            rightViewHumanEye.push_back(root->data);
        }

        // left view of binary tree
        // (pahle left jao,fir right jao)
        helper(root->left,level+1,rightViewHumanEye);
        helper(root->right,level+1,rightViewHumanEye);
    }
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> leftView(Node *root)
    {
       // Your Code here
       vector<int> rightViewHumanEye;
       int level = 0;
       helper(root,level,rightViewHumanEye);
       return rightViewHumanEye;
    }
};
