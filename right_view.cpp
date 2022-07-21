class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*>q;
        vector<int>v;
        int i;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(i==0)
                {
                    v.push_back(temp->val);
                }
                if(temp->right!=NULL)
                // in right view temp->right is pushed first before temp->left (V.I point) 
                {
                    q.push(temp->right);
                }
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
            }
        }
    return v;   
    }
};
