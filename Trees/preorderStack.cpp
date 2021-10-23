/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> vec;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        struct NodeState{
            TreeNode* ptr;
            int status;
            NodeState(TreeNode* ptr)
            {
                this->ptr = ptr;
                status = 0;
            }
        };
        
        vector<int> vec;
        stack<NodeState*> stk;
        TreeNode* curr = root;
        stk.push(new NodeState(curr));
        vec.push_back(curr->val);
        
        while(!stk.empty())
        {
            if((stk.top())->status == 0)
            {
                if(curr->left != nullptr)
                {
                    curr = curr->left;
                    stk.push(new NodeState(curr));
                    vec.push_back(((stk.top())->ptr)->val);
                }
                else
                    ((stk.top())->status)++;
            }
            else if(stk.top()->status == 1)
            {
                if(curr->right != nullptr)
                {
                    curr = curr->right;
                    stk.push(new NodeState(curr));
                    vec.push_back(((stk.top())->ptr)->val);
                }
                else
                    ((stk.top())->status)++;
            }
            else
            {
                stk.pop();
                ((stk.top())->status)++;
                curr = (stk.top())->ptr;
            }
        }
        return vec;
    }
};