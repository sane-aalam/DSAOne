#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Companies Tag ->  
// Facebook,Amazon,Bloomberg,Qualtrics,Oracle,Apple,Uber,Microsoft,DoorDash  
class Solution {
private:
    void helper(TreeNode* root, int currentLevel,vector<int> & rightSideHumanEyes){
        if(root == nullptr){
            return;
        }

      // store the data into result array 
        if(currentLevel == rightSideHumanEyes.size()){
            int nodeData = root->val;
            rightSideHumanEyes.push_back(nodeData);
        }

     // imagine yourself standing on the right side of it
     // First you need to go first side node of binary tree,if right side node is not exit, 
     // then we have to move left side of node binary tree
     // easy to understand (Mostly asked problem)
     
        helper(root->right,currentLevel+1,rightSideHumanEyes);
        helper(root->left,currentLevel+1,rightSideHumanEyes);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightSideHumanEyes;
        int currentLevel = 0;
        helper(root,currentLevel,rightSideHumanEyes);
        return rightSideHumanEyes;
    }
};