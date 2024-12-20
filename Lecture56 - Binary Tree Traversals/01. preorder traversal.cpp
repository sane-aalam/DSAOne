
#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    void helper(TreeNode * root,vector<int> & resultArray){

        if(root == nullptr){
            return;
        }
        //give root of binary tree - preorder traversal
        // according to this algorithm,we have to print the node(first,pre),
        // pass value of reference
        // we have to move left side of binary tree(go to left node)
        // we have to move right side of binary tree(go to right node)

        resultArray.push_back(root->val);
        helper(root->left,resultArray);
        helper(root->right,resultArray);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> resultArray;
        helper(root,resultArray);
        return resultArray;
    }
};