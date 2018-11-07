class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode *> q;
        int res = 0;
        q.push(root);
        while(!q.empty()){
            ++res;
            for(int i = 0, n = q.size(); i < n; i++){
                TreeNode *p = q.front();
                q.pop();
                
                if(p->left != nullptr)
                    q.push(p->left);
                if(p->right != nullptr)
                    q.push(p->right);
            }
        }
        return res;
    }

    int maxDepth2(TreeNode *root){
        if(root == nullptr)
            return root;
        return max(maxDepth2(root->left), maxDepth2(root->right)) + 1;
    }
}